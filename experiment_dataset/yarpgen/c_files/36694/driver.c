#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13408441575446422301ULL;
unsigned char var_6 = (unsigned char)139;
unsigned long long int var_12 = 11788715802196518541ULL;
int zero = 0;
int var_16 = 1204482840;
unsigned char var_17 = (unsigned char)117;
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
