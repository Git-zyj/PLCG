#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
short var_2 = (short)12106;
short var_7 = (short)27098;
unsigned int var_10 = 1608866598U;
short var_12 = (short)-14691;
unsigned short var_13 = (unsigned short)42566;
long long int var_14 = -474223483898415423LL;
short var_15 = (short)11145;
unsigned short var_16 = (unsigned short)5850;
int zero = 0;
short var_19 = (short)-25960;
unsigned int var_20 = 599964695U;
unsigned short var_21 = (unsigned short)20934;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
