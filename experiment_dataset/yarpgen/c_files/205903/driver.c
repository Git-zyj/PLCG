#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1121087827U;
int var_8 = 1900432193;
int zero = 0;
int var_15 = 1152194805;
unsigned long long int var_16 = 4976240814745118472ULL;
unsigned int var_17 = 606097935U;
long long int var_18 = 1584718826377042028LL;
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
