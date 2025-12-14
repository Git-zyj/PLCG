#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 593002810U;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 3989257613U;
unsigned int var_13 = 3232852259U;
signed char var_14 = (signed char)-49;
int zero = 0;
signed char var_16 = (signed char)-68;
short var_17 = (short)31741;
short var_18 = (short)27328;
int var_19 = 501511725;
unsigned char var_20 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
