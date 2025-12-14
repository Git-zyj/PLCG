#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 375841114323528867ULL;
short var_4 = (short)12080;
long long int var_5 = 8225284637259791733LL;
unsigned short var_6 = (unsigned short)64448;
int zero = 0;
unsigned int var_15 = 891608594U;
unsigned short var_16 = (unsigned short)54793;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
