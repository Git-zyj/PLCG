#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 60179911;
unsigned short var_8 = (unsigned short)56811;
unsigned int var_10 = 2090401648U;
unsigned short var_11 = (unsigned short)55460;
unsigned char var_12 = (unsigned char)232;
int var_14 = -1122508835;
int zero = 0;
unsigned char var_15 = (unsigned char)160;
short var_16 = (short)15130;
void init() {
}

void checksum() {
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
