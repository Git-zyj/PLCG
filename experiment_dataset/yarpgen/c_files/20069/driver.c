#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4618;
unsigned char var_5 = (unsigned char)159;
unsigned int var_9 = 796988647U;
short var_10 = (short)20023;
unsigned short var_11 = (unsigned short)20883;
unsigned char var_13 = (unsigned char)240;
int zero = 0;
short var_18 = (short)-10189;
unsigned char var_19 = (unsigned char)221;
unsigned char var_20 = (unsigned char)164;
unsigned short var_21 = (unsigned short)63764;
unsigned char var_22 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
