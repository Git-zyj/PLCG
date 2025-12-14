#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)140;
unsigned int var_7 = 3668296445U;
long long int var_12 = 2427530214649558840LL;
int zero = 0;
unsigned short var_16 = (unsigned short)62762;
unsigned int var_17 = 3247902991U;
unsigned int var_18 = 1620342472U;
unsigned int var_19 = 203570608U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
