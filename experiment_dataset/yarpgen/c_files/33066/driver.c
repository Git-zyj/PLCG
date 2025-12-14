#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 8548741415111787874ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 1850153785;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-68;
unsigned short var_12 = (unsigned short)30726;
signed char var_13 = (signed char)-70;
unsigned short var_14 = (unsigned short)29111;
int zero = 0;
unsigned char var_16 = (unsigned char)165;
unsigned long long int var_17 = 8292501503702493907ULL;
unsigned long long int var_18 = 1879063357998403293ULL;
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
