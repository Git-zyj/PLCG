#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34532;
unsigned char var_5 = (unsigned char)23;
short var_7 = (short)12161;
int var_8 = 134533252;
unsigned short var_9 = (unsigned short)43261;
int var_10 = 854430280;
short var_11 = (short)-32530;
unsigned long long int var_12 = 15070573012783160353ULL;
int zero = 0;
unsigned int var_13 = 3108369796U;
int var_14 = 1087011874;
unsigned char var_15 = (unsigned char)107;
unsigned long long int var_16 = 5990900052445394271ULL;
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
