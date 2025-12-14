#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42685;
int var_4 = 2063098602;
short var_5 = (short)-32348;
unsigned short var_7 = (unsigned short)23545;
int var_14 = -1809881956;
int zero = 0;
unsigned char var_15 = (unsigned char)149;
int var_16 = 1538302346;
unsigned char var_17 = (unsigned char)47;
unsigned int var_18 = 2247867588U;
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
