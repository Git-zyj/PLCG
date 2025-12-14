#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42414;
short var_5 = (short)-1832;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)170;
short var_8 = (short)-6427;
unsigned short var_10 = (unsigned short)562;
short var_11 = (short)26253;
int zero = 0;
int var_12 = -132303525;
short var_13 = (short)-583;
unsigned char var_14 = (unsigned char)23;
unsigned long long int var_15 = 11943441396875752230ULL;
void init() {
}

void checksum() {
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
