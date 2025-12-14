#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)40;
unsigned int var_4 = 855070901U;
unsigned long long int var_6 = 1263681871800913651ULL;
unsigned short var_8 = (unsigned short)44680;
unsigned int var_9 = 3022177334U;
signed char var_10 = (signed char)36;
unsigned short var_11 = (unsigned short)22272;
long long int var_13 = -376491124866496587LL;
int zero = 0;
short var_15 = (short)-6432;
long long int var_16 = 4488281716662615265LL;
short var_17 = (short)-11028;
unsigned long long int var_18 = 11517254511247637782ULL;
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
