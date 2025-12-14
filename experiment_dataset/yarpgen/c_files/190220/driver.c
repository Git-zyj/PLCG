#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29854;
long long int var_2 = -4695799390999629420LL;
int var_3 = 1089919827;
signed char var_4 = (signed char)-118;
short var_5 = (short)-30603;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)224;
unsigned char var_13 = (unsigned char)200;
unsigned long long int var_14 = 14545875304617806705ULL;
int zero = 0;
int var_15 = -1755177824;
unsigned short var_16 = (unsigned short)63751;
int var_17 = 1689247264;
void init() {
}

void checksum() {
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
