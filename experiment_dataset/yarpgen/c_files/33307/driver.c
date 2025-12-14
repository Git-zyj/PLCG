#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)16794;
unsigned long long int var_7 = 10429680922192224259ULL;
short var_10 = (short)-32570;
unsigned int var_11 = 1706031942U;
unsigned char var_12 = (unsigned char)106;
unsigned int var_13 = 2726094534U;
int zero = 0;
unsigned long long int var_14 = 13942702640964751808ULL;
short var_15 = (short)11406;
unsigned char var_16 = (unsigned char)104;
short var_17 = (short)-21230;
short var_18 = (short)-19560;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
