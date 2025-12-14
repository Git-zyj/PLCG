#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1599877565U;
signed char var_4 = (signed char)77;
int zero = 0;
unsigned long long int var_10 = 8349078567310147898ULL;
unsigned long long int var_11 = 13387252051132731525ULL;
unsigned long long int var_12 = 1501164477499769515ULL;
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
