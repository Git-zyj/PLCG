#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1922895036;
unsigned long long int var_13 = 6478669631121363652ULL;
long long int var_14 = -3109931372823764914LL;
unsigned int var_17 = 2631481902U;
int zero = 0;
unsigned long long int var_20 = 2708759795199443652ULL;
int var_21 = 1767385238;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
