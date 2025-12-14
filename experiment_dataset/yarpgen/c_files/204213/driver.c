#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
short var_3 = (short)-21308;
short var_4 = (short)18135;
int var_7 = -2131183930;
int var_9 = 1066377185;
unsigned char var_10 = (unsigned char)219;
int zero = 0;
unsigned long long int var_11 = 4249571490341681821ULL;
unsigned long long int var_12 = 14167077196400133141ULL;
int var_13 = -1665140281;
unsigned long long int var_14 = 1405628757614290792ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
