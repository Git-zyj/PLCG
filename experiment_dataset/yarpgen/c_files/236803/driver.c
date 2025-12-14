#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9001978318866975446LL;
signed char var_2 = (signed char)107;
unsigned long long int var_5 = 12501300849084674220ULL;
int var_7 = -229187243;
unsigned int var_9 = 1492413971U;
int zero = 0;
unsigned int var_10 = 1379069539U;
unsigned long long int var_11 = 14068021951359624442ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
