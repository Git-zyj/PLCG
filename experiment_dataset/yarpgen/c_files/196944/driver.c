#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 8018754404722326638LL;
int var_6 = -1771500699;
long long int var_7 = -107215497021168005LL;
unsigned short var_8 = (unsigned short)61962;
unsigned int var_9 = 2636325102U;
unsigned char var_10 = (unsigned char)248;
short var_13 = (short)-9804;
long long int var_14 = 5607748287657963103LL;
int zero = 0;
unsigned int var_15 = 1568067362U;
unsigned char var_16 = (unsigned char)233;
unsigned int var_17 = 274599741U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
