#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46511;
unsigned short var_3 = (unsigned short)198;
unsigned char var_4 = (unsigned char)121;
unsigned char var_7 = (unsigned char)12;
unsigned short var_8 = (unsigned short)23699;
short var_10 = (short)20253;
unsigned short var_12 = (unsigned short)51306;
unsigned char var_15 = (unsigned char)107;
unsigned char var_16 = (unsigned char)246;
int zero = 0;
unsigned char var_17 = (unsigned char)234;
unsigned long long int var_18 = 12765637311706615302ULL;
unsigned short var_19 = (unsigned short)60145;
void init() {
}

void checksum() {
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
