#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2817214293U;
short var_2 = (short)-9977;
unsigned long long int var_6 = 13217915645710197124ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)16862;
unsigned short var_11 = (unsigned short)45662;
unsigned int var_12 = 1381110439U;
unsigned char var_13 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
