#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
int var_1 = 1982364117;
unsigned long long int var_3 = 12624158596015316674ULL;
unsigned short var_5 = (unsigned short)63628;
unsigned short var_7 = (unsigned short)39791;
signed char var_11 = (signed char)-91;
unsigned short var_12 = (unsigned short)13360;
unsigned char var_14 = (unsigned char)206;
int zero = 0;
unsigned char var_15 = (unsigned char)81;
unsigned long long int var_16 = 8593989148747669495ULL;
unsigned char var_17 = (unsigned char)235;
unsigned char var_18 = (unsigned char)124;
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
