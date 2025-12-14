#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21942;
signed char var_1 = (signed char)101;
short var_3 = (short)-25252;
unsigned short var_4 = (unsigned short)2442;
int var_5 = 76370372;
unsigned int var_7 = 2400528790U;
long long int var_8 = 1779209155337493880LL;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
int var_12 = -1953441191;
unsigned long long int var_13 = 17799792356496275033ULL;
signed char var_14 = (signed char)-14;
unsigned int var_15 = 3864765226U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
