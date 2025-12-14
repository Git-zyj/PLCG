#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1508390713;
int var_3 = -242082406;
unsigned long long int var_12 = 14417620329434064732ULL;
unsigned int var_15 = 2056492398U;
unsigned int var_18 = 3468900310U;
int zero = 0;
int var_19 = -1279352696;
int var_20 = -924483532;
unsigned long long int var_21 = 11789683314281788958ULL;
unsigned int var_22 = 3382960480U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
