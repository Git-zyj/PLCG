#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1099523122;
signed char var_8 = (signed char)-86;
unsigned long long int var_9 = 10763288538668408947ULL;
int var_11 = -763566549;
int zero = 0;
unsigned int var_14 = 1756498433U;
unsigned int var_15 = 2518448242U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
