#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1824161364;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 17671128347233566678ULL;
unsigned long long int var_14 = 12772869401979939807ULL;
int var_15 = -1756937883;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 9052205966051958383ULL;
int var_22 = -1105314607;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
