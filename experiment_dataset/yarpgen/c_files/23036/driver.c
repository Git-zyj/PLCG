#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 635216027;
int var_11 = 1858995005;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1339396999U;
int zero = 0;
int var_15 = 904978302;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 16063336448112941852ULL;
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
