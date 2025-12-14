#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12446;
unsigned int var_7 = 2255053048U;
unsigned short var_8 = (unsigned short)55107;
unsigned char var_10 = (unsigned char)237;
long long int var_15 = 3329202229389128349LL;
int zero = 0;
short var_16 = (short)16881;
unsigned char var_17 = (unsigned char)228;
signed char var_18 = (signed char)7;
int var_19 = -576231247;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
