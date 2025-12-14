#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7437163465761241571ULL;
signed char var_7 = (signed char)96;
long long int var_9 = 2497381047975056322LL;
int zero = 0;
long long int var_15 = 3381235030953125064LL;
long long int var_16 = -2333645957352507117LL;
void init() {
}

void checksum() {
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
