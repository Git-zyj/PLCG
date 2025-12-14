#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2000191588U;
unsigned short var_2 = (unsigned short)1259;
short var_4 = (short)15491;
short var_6 = (short)23680;
int var_7 = -1129243176;
long long int var_8 = 3757940570707126942LL;
short var_11 = (short)7394;
unsigned char var_12 = (unsigned char)157;
short var_14 = (short)-21031;
unsigned short var_15 = (unsigned short)57795;
int zero = 0;
unsigned short var_16 = (unsigned short)19199;
unsigned short var_17 = (unsigned short)52751;
void init() {
}

void checksum() {
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
