#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -7554983769195632288LL;
unsigned long long int var_16 = 6773389979926777618ULL;
int var_17 = -1781925406;
int zero = 0;
unsigned int var_18 = 2365950360U;
unsigned int var_19 = 2811111764U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
