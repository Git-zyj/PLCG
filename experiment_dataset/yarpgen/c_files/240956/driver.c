#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3641642082U;
unsigned long long int var_6 = 12695075135434503516ULL;
unsigned long long int var_11 = 17250201325379606817ULL;
int zero = 0;
long long int var_16 = 7631924620960347568LL;
unsigned char var_17 = (unsigned char)93;
void init() {
}

void checksum() {
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
