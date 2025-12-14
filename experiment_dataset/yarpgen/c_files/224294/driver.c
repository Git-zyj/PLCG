#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24126;
unsigned char var_2 = (unsigned char)217;
int var_3 = 711045787;
int var_5 = -1770693661;
unsigned short var_7 = (unsigned short)48917;
short var_8 = (short)-480;
unsigned char var_9 = (unsigned char)200;
short var_10 = (short)-20624;
unsigned char var_14 = (unsigned char)213;
int zero = 0;
int var_15 = 1077689072;
short var_16 = (short)-30966;
unsigned short var_17 = (unsigned short)14427;
short var_18 = (short)11361;
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
