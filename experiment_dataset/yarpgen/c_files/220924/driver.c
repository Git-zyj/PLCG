#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22328;
unsigned char var_1 = (unsigned char)39;
short var_5 = (short)22753;
long long int var_6 = 1471047248630984591LL;
int zero = 0;
long long int var_10 = 7125180933969634280LL;
short var_11 = (short)16872;
signed char var_12 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
