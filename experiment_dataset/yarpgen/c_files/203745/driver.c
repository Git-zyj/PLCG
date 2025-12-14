#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1843287609;
int var_12 = -337620247;
unsigned long long int var_14 = 146896163220740584ULL;
int zero = 0;
unsigned int var_15 = 2053434371U;
long long int var_16 = -3599618981484967549LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
