#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1857123089U;
unsigned int var_6 = 3807475055U;
unsigned int var_10 = 585647277U;
int zero = 0;
unsigned int var_15 = 2365796765U;
unsigned long long int var_16 = 12754130645044148290ULL;
unsigned int var_17 = 880268905U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
