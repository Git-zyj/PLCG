#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
long long int var_2 = 2534387403635593024LL;
unsigned int var_4 = 2763057443U;
unsigned int var_7 = 942753361U;
unsigned char var_10 = (unsigned char)148;
int zero = 0;
int var_13 = 31524056;
unsigned int var_14 = 1014056027U;
long long int var_15 = 7332961244349129224LL;
short var_16 = (short)-22891;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
