#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
short var_2 = (short)-2718;
unsigned int var_5 = 1051219628U;
unsigned char var_7 = (unsigned char)128;
unsigned char var_8 = (unsigned char)103;
int var_10 = -430349076;
int zero = 0;
int var_12 = 1763453295;
long long int var_13 = 5673982983695388492LL;
void init() {
}

void checksum() {
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
