#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 470098483U;
long long int var_7 = -5173301864329508517LL;
unsigned long long int var_8 = 2181316997242669856ULL;
int zero = 0;
signed char var_11 = (signed char)112;
signed char var_12 = (signed char)-122;
unsigned int var_13 = 1854244084U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
