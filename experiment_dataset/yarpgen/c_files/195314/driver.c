#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-22063;
int var_11 = -841700584;
unsigned long long int var_12 = 7705927003428604404ULL;
int zero = 0;
short var_17 = (short)18571;
unsigned long long int var_18 = 1033597442171366576ULL;
int var_19 = 301366481;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
