#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -863397620;
unsigned char var_6 = (unsigned char)166;
unsigned short var_9 = (unsigned short)39323;
short var_11 = (short)-22041;
unsigned long long int var_13 = 6500871177706624799ULL;
unsigned int var_15 = 1194072079U;
int zero = 0;
int var_16 = -588841507;
unsigned short var_17 = (unsigned short)37776;
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
