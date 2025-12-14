#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36446;
unsigned short var_1 = (unsigned short)24614;
int var_3 = 1637421505;
short var_4 = (short)7489;
unsigned char var_5 = (unsigned char)244;
unsigned char var_6 = (unsigned char)80;
unsigned short var_7 = (unsigned short)43413;
int var_8 = -1773144763;
int zero = 0;
unsigned short var_11 = (unsigned short)55443;
unsigned char var_12 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
