#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)252;
short var_6 = (short)21452;
signed char var_11 = (signed char)117;
unsigned short var_13 = (unsigned short)59180;
int zero = 0;
unsigned short var_15 = (unsigned short)46620;
int var_16 = -1218306388;
int var_17 = -1237467505;
unsigned long long int var_18 = 16559190390238142026ULL;
unsigned char var_19 = (unsigned char)205;
unsigned char var_20 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
