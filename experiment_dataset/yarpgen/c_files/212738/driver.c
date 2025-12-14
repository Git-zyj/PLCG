#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22418;
short var_3 = (short)5243;
unsigned int var_10 = 1652491657U;
unsigned short var_13 = (unsigned short)33795;
unsigned int var_17 = 2355688631U;
int zero = 0;
long long int var_18 = 6764474755719472980LL;
short var_19 = (short)-21250;
long long int var_20 = 1327864260009223377LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
