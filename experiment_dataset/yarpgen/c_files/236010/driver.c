#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36903;
short var_6 = (short)8315;
unsigned short var_7 = (unsigned short)12989;
unsigned short var_11 = (unsigned short)7654;
int zero = 0;
short var_16 = (short)-22845;
signed char var_17 = (signed char)69;
unsigned long long int var_18 = 6181554902711412530ULL;
void init() {
}

void checksum() {
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
