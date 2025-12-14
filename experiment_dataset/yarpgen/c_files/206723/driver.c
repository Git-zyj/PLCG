#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1535054828089565432LL;
unsigned char var_1 = (unsigned char)104;
unsigned char var_5 = (unsigned char)42;
int var_6 = 1650606412;
short var_7 = (short)-28152;
_Bool var_10 = (_Bool)1;
short var_12 = (short)680;
unsigned char var_13 = (unsigned char)84;
unsigned int var_14 = 854964186U;
int zero = 0;
unsigned char var_15 = (unsigned char)75;
unsigned long long int var_16 = 11394514146879437608ULL;
unsigned int var_17 = 2335320545U;
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
