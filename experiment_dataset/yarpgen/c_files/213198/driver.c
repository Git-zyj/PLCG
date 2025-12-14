#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14691746839696924342ULL;
unsigned char var_3 = (unsigned char)131;
unsigned char var_4 = (unsigned char)79;
unsigned char var_5 = (unsigned char)2;
long long int var_10 = 4380520516650062084LL;
long long int var_13 = 5057075647076842675LL;
int zero = 0;
short var_15 = (short)11698;
long long int var_16 = 9175330671959324556LL;
unsigned char var_17 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
