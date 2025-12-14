#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15657;
unsigned char var_4 = (unsigned char)184;
unsigned char var_7 = (unsigned char)16;
unsigned long long int var_13 = 15291801845272878108ULL;
int zero = 0;
short var_14 = (short)-22792;
unsigned short var_15 = (unsigned short)35469;
int var_16 = 665174013;
int var_17 = -317397579;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
