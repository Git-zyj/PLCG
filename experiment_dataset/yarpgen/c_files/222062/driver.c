#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14950989384830163477ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3991515757U;
unsigned int var_6 = 1692064336U;
unsigned int var_7 = 602535881U;
int zero = 0;
long long int var_17 = -1482306138465679039LL;
unsigned long long int var_18 = 18105690219816469892ULL;
void init() {
}

void checksum() {
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
