#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 157933492;
short var_3 = (short)11753;
short var_4 = (short)-8208;
unsigned char var_5 = (unsigned char)191;
short var_6 = (short)-14648;
long long int var_7 = 1528386925327871917LL;
unsigned short var_8 = (unsigned short)35075;
unsigned long long int var_10 = 11265861896741700596ULL;
int zero = 0;
signed char var_14 = (signed char)58;
unsigned long long int var_15 = 15218237111082003171ULL;
short var_16 = (short)-11244;
short var_17 = (short)-26981;
unsigned short var_18 = (unsigned short)43885;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
