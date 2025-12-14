#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8851909048555499320LL;
signed char var_5 = (signed char)49;
int var_11 = 1345249747;
unsigned char var_12 = (unsigned char)88;
int zero = 0;
int var_15 = -1139680299;
int var_16 = -1272285729;
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
