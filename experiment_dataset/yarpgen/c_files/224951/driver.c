#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 19833236;
unsigned int var_12 = 3622681477U;
unsigned long long int var_15 = 7120093259733515118ULL;
int zero = 0;
int var_17 = -1091121646;
unsigned long long int var_18 = 12489855917234340456ULL;
unsigned long long int var_19 = 16753733085054247395ULL;
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
