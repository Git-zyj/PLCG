#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)210;
unsigned short var_6 = (unsigned short)44933;
int var_7 = -1609216158;
unsigned short var_10 = (unsigned short)17847;
int var_12 = 1066400161;
unsigned long long int var_13 = 7250431668681976484ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-30909;
int var_19 = 1147266768;
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
