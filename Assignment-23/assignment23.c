#include <stdio.h>
#include <string.h>

struct example {

	int integer;

};

int main (void)
{
	struct example *ptr;

	struct example test;

	ptr = &test;

	test.integer = 5;
	printf("%d\n", test.integer);

	(*ptr).integer = 6;
	printf("%d\n", test.integer);

	ptr->integer = 7;
	printf("%d", test.integer);

	return 0;
}

