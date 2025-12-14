#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1632017646030813744ULL;
unsigned short var_9 = (unsigned short)3127;
unsigned long long int var_10 = 14725767567024466624ULL;
int var_14 = -1380409588;
int zero = 0;
unsigned long long int var_16 = 11907690202519097455ULL;
unsigned long long int var_17 = 505153662355085677ULL;
int var_18 = -132754183;
void init() {
}

void checksum() {
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
