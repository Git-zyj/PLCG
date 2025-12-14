#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3135509610668900040ULL;
unsigned long long int var_12 = 13601408855459517043ULL;
int zero = 0;
signed char var_14 = (signed char)79;
unsigned int var_15 = 254849752U;
unsigned long long int var_16 = 7966822772115628000ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
