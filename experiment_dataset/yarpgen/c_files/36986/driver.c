#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29574;
unsigned long long int var_2 = 7350587283036981296ULL;
unsigned char var_3 = (unsigned char)33;
long long int var_4 = -3005101371885995920LL;
unsigned char var_5 = (unsigned char)239;
unsigned short var_6 = (unsigned short)1518;
unsigned short var_7 = (unsigned short)23809;
unsigned short var_8 = (unsigned short)63356;
unsigned long long int var_9 = 2988333477064550494ULL;
unsigned long long int var_10 = 14098623179502047434ULL;
unsigned short var_13 = (unsigned short)39050;
int zero = 0;
long long int var_14 = 3017039311994221492LL;
int var_15 = -1917454286;
unsigned long long int var_16 = 990834470068887003ULL;
unsigned char var_17 = (unsigned char)54;
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
