#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
unsigned char var_2 = (unsigned char)187;
unsigned char var_5 = (unsigned char)76;
signed char var_7 = (signed char)-113;
int var_10 = 917075731;
long long int var_12 = -7898666470967652611LL;
unsigned short var_13 = (unsigned short)9914;
int zero = 0;
unsigned short var_14 = (unsigned short)45183;
unsigned short var_15 = (unsigned short)33081;
unsigned long long int var_16 = 12747781533733229126ULL;
unsigned char var_17 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
