#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1763368248U;
unsigned int var_12 = 14781851U;
int zero = 0;
long long int var_16 = -3070634802414524471LL;
unsigned long long int var_17 = 3802390391666978326ULL;
unsigned int var_18 = 687967924U;
int var_19 = -1523532583;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
