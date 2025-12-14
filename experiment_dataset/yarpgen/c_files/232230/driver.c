#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7366125465212678538ULL;
unsigned long long int var_4 = 2194752583780178654ULL;
unsigned long long int var_11 = 5399448234532903185ULL;
unsigned long long int var_14 = 8372423077715627313ULL;
int zero = 0;
unsigned long long int var_15 = 3731810740406216543ULL;
unsigned long long int var_16 = 9997761468214385152ULL;
unsigned long long int var_17 = 5190204137184311375ULL;
unsigned long long int var_18 = 16752057071847520020ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
