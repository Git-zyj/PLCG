#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)33;
long long int var_10 = 4182721228643829105LL;
unsigned int var_14 = 2116182790U;
short var_19 = (short)-20480;
int zero = 0;
long long int var_20 = -6292891846127676391LL;
long long int var_21 = -1206077698124236011LL;
unsigned short var_22 = (unsigned short)38094;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
