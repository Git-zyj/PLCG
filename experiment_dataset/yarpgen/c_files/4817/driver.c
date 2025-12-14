#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-23765;
int var_4 = -900734488;
unsigned short var_5 = (unsigned short)24514;
signed char var_8 = (signed char)47;
int zero = 0;
unsigned short var_19 = (unsigned short)56704;
unsigned int var_20 = 3223100832U;
unsigned short var_21 = (unsigned short)48651;
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
