#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -445536600;
unsigned int var_4 = 364969741U;
int var_5 = 952718145;
unsigned int var_7 = 3959378735U;
unsigned char var_8 = (unsigned char)95;
unsigned char var_11 = (unsigned char)178;
long long int var_13 = -2801233142870895725LL;
int zero = 0;
int var_16 = 1341385454;
short var_17 = (short)29083;
signed char var_18 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
