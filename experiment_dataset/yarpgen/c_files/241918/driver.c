#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2978;
unsigned short var_3 = (unsigned short)23686;
signed char var_7 = (signed char)20;
long long int var_8 = 63417812000407649LL;
short var_14 = (short)-14426;
int zero = 0;
long long int var_16 = -7422875718965343661LL;
unsigned int var_17 = 1237187075U;
int var_18 = -1660339408;
unsigned char var_19 = (unsigned char)31;
unsigned int var_20 = 309846131U;
void init() {
}

void checksum() {
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
