#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_6 = (short)824;
unsigned short var_8 = (unsigned short)10508;
unsigned char var_15 = (unsigned char)160;
int zero = 0;
long long int var_17 = 3170799142553046201LL;
unsigned int var_18 = 2888837495U;
unsigned long long int var_19 = 1689720049781439448ULL;
unsigned short var_20 = (unsigned short)37730;
void init() {
}

void checksum() {
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
