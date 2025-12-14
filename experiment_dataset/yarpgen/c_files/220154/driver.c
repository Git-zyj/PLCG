#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21697;
long long int var_2 = 8685086137675230013LL;
long long int var_4 = -3322613921059619015LL;
unsigned char var_7 = (unsigned char)86;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
short var_11 = (short)-30363;
long long int var_12 = 5320580801705705684LL;
void init() {
}

void checksum() {
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
