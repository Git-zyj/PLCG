#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2014792262228569679LL;
unsigned char var_1 = (unsigned char)73;
short var_2 = (short)-12241;
signed char var_3 = (signed char)30;
short var_7 = (short)-16925;
signed char var_8 = (signed char)-9;
unsigned char var_10 = (unsigned char)72;
unsigned char var_11 = (unsigned char)159;
unsigned int var_15 = 1084221588U;
int zero = 0;
unsigned short var_16 = (unsigned short)42050;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)33;
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
