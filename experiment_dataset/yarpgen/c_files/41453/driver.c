#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10684568376196680766ULL;
unsigned short var_2 = (unsigned short)65351;
unsigned short var_14 = (unsigned short)1448;
int zero = 0;
unsigned long long int var_16 = 6815647925520409971ULL;
unsigned long long int var_17 = 14351244713386555117ULL;
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
