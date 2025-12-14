#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5412541304616009231ULL;
unsigned int var_6 = 2968740760U;
int var_7 = -1568649491;
unsigned int var_10 = 574152030U;
int zero = 0;
int var_14 = 910177517;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9966901208388626771ULL;
int var_17 = 793081179;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
