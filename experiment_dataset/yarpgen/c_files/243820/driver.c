#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
unsigned int var_3 = 2436793466U;
unsigned long long int var_4 = 11028657689993783927ULL;
signed char var_5 = (signed char)-73;
unsigned char var_6 = (unsigned char)202;
unsigned long long int var_10 = 11052841159473217603ULL;
unsigned char var_11 = (unsigned char)161;
int zero = 0;
unsigned int var_12 = 1093824068U;
unsigned int var_13 = 2196123056U;
short var_14 = (short)-22594;
short var_15 = (short)-1602;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
