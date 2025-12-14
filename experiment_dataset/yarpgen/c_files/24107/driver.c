#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)33;
signed char var_6 = (signed char)-31;
unsigned short var_12 = (unsigned short)46709;
unsigned short var_13 = (unsigned short)53574;
unsigned int var_14 = 2890478510U;
int zero = 0;
short var_15 = (short)22053;
unsigned char var_16 = (unsigned char)106;
unsigned int var_17 = 1860195250U;
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
