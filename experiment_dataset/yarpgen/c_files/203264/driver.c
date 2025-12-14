#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26698;
unsigned char var_5 = (unsigned char)122;
unsigned char var_7 = (unsigned char)216;
unsigned char var_10 = (unsigned char)99;
unsigned char var_11 = (unsigned char)143;
short var_14 = (short)-7355;
unsigned char var_15 = (unsigned char)59;
int zero = 0;
unsigned char var_19 = (unsigned char)3;
unsigned char var_20 = (unsigned char)178;
unsigned long long int var_21 = 16843401974615476736ULL;
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
