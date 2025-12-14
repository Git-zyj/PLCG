#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)8393;
int var_11 = 1395920007;
int zero = 0;
unsigned short var_13 = (unsigned short)37035;
unsigned short var_14 = (unsigned short)46330;
short var_15 = (short)14206;
short var_16 = (short)-6852;
unsigned long long int var_17 = 7843922508013545430ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
