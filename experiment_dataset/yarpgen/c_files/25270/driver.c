#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -1675144791;
unsigned short var_6 = (unsigned short)63121;
signed char var_8 = (signed char)-83;
int zero = 0;
unsigned short var_10 = (unsigned short)62315;
unsigned short var_11 = (unsigned short)5783;
int var_12 = 2081037061;
unsigned short var_13 = (unsigned short)14579;
unsigned int var_14 = 1350737405U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
