#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2514365663U;
int var_1 = 1432642189;
unsigned long long int var_2 = 14151877663387752314ULL;
int var_10 = -276013395;
unsigned int var_12 = 3732220749U;
int zero = 0;
unsigned int var_15 = 3287956653U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17856740490744477264ULL;
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
