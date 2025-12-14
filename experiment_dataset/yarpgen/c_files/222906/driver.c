#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
int var_3 = 1219070686;
unsigned int var_7 = 2025011498U;
int zero = 0;
unsigned int var_10 = 2398406962U;
unsigned long long int var_11 = 8639927795581111979ULL;
unsigned long long int var_12 = 12662551711727692478ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
