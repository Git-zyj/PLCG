#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1382451511;
unsigned long long int var_6 = 2335448224584175924ULL;
unsigned int var_7 = 3491434232U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 2398781199U;
unsigned long long int var_12 = 11663902440412411407ULL;
unsigned int var_13 = 578065166U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
