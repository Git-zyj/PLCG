#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -378240236;
int var_4 = -1963339824;
unsigned short var_5 = (unsigned short)25132;
unsigned char var_8 = (unsigned char)232;
unsigned char var_11 = (unsigned char)12;
signed char var_12 = (signed char)-61;
int zero = 0;
int var_14 = 119127807;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)14;
long long int var_17 = 6907566131241165391LL;
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
