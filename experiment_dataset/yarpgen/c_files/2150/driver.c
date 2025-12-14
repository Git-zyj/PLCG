#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -185853036;
long long int var_6 = -455629686661850785LL;
long long int var_9 = 6780958541541735847LL;
int zero = 0;
short var_10 = (short)-7836;
unsigned long long int var_11 = 6239039837344930598ULL;
unsigned int var_12 = 3329653004U;
short var_13 = (short)21811;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
