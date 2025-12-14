#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1583243546593561749LL;
unsigned char var_8 = (unsigned char)6;
int var_10 = 142934738;
int zero = 0;
long long int var_15 = -9116187002097416091LL;
long long int var_16 = -1508063441093201021LL;
short var_17 = (short)-7140;
long long int var_18 = -6841068368259667946LL;
void init() {
}

void checksum() {
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
