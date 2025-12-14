#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1553553092;
int var_2 = 1470605037;
int var_4 = 446365097;
int var_5 = -675271826;
int var_6 = 1815731744;
int var_9 = 144577747;
int var_10 = -1788148349;
int zero = 0;
int var_11 = 910176787;
int var_12 = -350811072;
int var_13 = 201003201;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
