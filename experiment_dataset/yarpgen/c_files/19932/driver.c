#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7240757532868621160LL;
long long int var_9 = -1707616461865827264LL;
short var_12 = (short)-18651;
unsigned long long int var_14 = 9350809774860641329ULL;
int zero = 0;
int var_15 = -1428339359;
unsigned short var_16 = (unsigned short)26175;
_Bool var_17 = (_Bool)1;
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
