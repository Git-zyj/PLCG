#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)44438;
unsigned long long int var_12 = 13656110074549560305ULL;
unsigned short var_16 = (unsigned short)1921;
int zero = 0;
unsigned short var_17 = (unsigned short)33284;
signed char var_18 = (signed char)-22;
unsigned long long int var_19 = 11461621245347753426ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
