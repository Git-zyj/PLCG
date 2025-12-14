#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 23078299;
int var_5 = -739956400;
long long int var_6 = -2354048609788405215LL;
short var_8 = (short)17389;
unsigned short var_10 = (unsigned short)64033;
signed char var_11 = (signed char)10;
unsigned int var_13 = 852490424U;
short var_14 = (short)-9404;
short var_16 = (short)30723;
int zero = 0;
int var_19 = -1106553259;
short var_20 = (short)-26319;
void init() {
}

void checksum() {
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
