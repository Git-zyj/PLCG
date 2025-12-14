#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22519;
unsigned long long int var_5 = 11972912923509382583ULL;
unsigned char var_6 = (unsigned char)210;
int zero = 0;
long long int var_10 = -7274636588278788936LL;
unsigned char var_11 = (unsigned char)42;
unsigned char var_12 = (unsigned char)103;
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
