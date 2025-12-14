#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)21;
short var_6 = (short)-32404;
unsigned short var_7 = (unsigned short)34882;
unsigned short var_10 = (unsigned short)1297;
int zero = 0;
signed char var_15 = (signed char)2;
signed char var_16 = (signed char)-48;
short var_17 = (short)-22452;
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
