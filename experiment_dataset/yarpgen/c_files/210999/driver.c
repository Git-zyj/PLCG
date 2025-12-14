#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3712;
unsigned short var_4 = (unsigned short)59079;
unsigned long long int var_5 = 9966586512607606766ULL;
long long int var_7 = 8440592761503894738LL;
unsigned int var_15 = 3311218032U;
int zero = 0;
unsigned short var_16 = (unsigned short)23381;
unsigned int var_17 = 37600451U;
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
