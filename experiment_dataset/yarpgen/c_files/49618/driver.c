#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3810822341U;
unsigned int var_4 = 2331275517U;
unsigned int var_5 = 2511681173U;
unsigned int var_9 = 2085693252U;
int zero = 0;
unsigned int var_10 = 2365690556U;
unsigned int var_11 = 1150051081U;
unsigned int var_12 = 3121365366U;
unsigned int var_13 = 1342452068U;
unsigned int var_14 = 3186032416U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
