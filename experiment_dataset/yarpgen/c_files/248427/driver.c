#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)89;
short var_7 = (short)19030;
long long int var_8 = -3215801302185508399LL;
unsigned char var_10 = (unsigned char)178;
short var_12 = (short)8973;
unsigned short var_16 = (unsigned short)2350;
unsigned short var_17 = (unsigned short)64268;
unsigned char var_18 = (unsigned char)124;
int zero = 0;
long long int var_19 = -3219456395837667147LL;
long long int var_20 = 2869860030664076780LL;
signed char var_21 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
