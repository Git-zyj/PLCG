#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5942;
unsigned int var_10 = 1498136511U;
int var_12 = -1001628814;
unsigned char var_13 = (unsigned char)157;
unsigned int var_14 = 2984757094U;
unsigned char var_15 = (unsigned char)184;
unsigned int var_17 = 3302325923U;
int zero = 0;
unsigned short var_18 = (unsigned short)12916;
long long int var_19 = 6769496786839817159LL;
short var_20 = (short)17575;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
