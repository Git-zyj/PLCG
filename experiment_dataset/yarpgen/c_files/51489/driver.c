#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1324871727;
unsigned char var_5 = (unsigned char)212;
short var_7 = (short)-21320;
long long int var_8 = 943203000794913195LL;
unsigned short var_10 = (unsigned short)18015;
int zero = 0;
unsigned short var_11 = (unsigned short)6919;
unsigned short var_12 = (unsigned short)2378;
unsigned long long int var_13 = 11588994353262341135ULL;
unsigned char var_14 = (unsigned char)202;
short var_15 = (short)22637;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
