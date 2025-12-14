#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15837813452912199645ULL;
unsigned short var_7 = (unsigned short)45357;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)205;
int zero = 0;
short var_16 = (short)29053;
signed char var_17 = (signed char)-113;
unsigned char var_18 = (unsigned char)54;
unsigned char var_19 = (unsigned char)206;
short var_20 = (short)24520;
short var_21 = (short)-12178;
unsigned int var_22 = 2884659946U;
unsigned int var_23 = 4050579533U;
unsigned long long int var_24 = 14735885311926323162ULL;
signed char var_25 = (signed char)117;
short var_26 = (short)-18492;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
