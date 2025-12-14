#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)234;
unsigned short var_5 = (unsigned short)44505;
unsigned short var_6 = (unsigned short)27597;
unsigned char var_8 = (unsigned char)30;
short var_9 = (short)-11874;
unsigned char var_11 = (unsigned char)133;
int zero = 0;
short var_19 = (short)29929;
unsigned char var_20 = (unsigned char)82;
short var_21 = (short)-4001;
unsigned int var_22 = 790972789U;
unsigned short var_23 = (unsigned short)2704;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
