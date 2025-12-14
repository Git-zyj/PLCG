#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2279732920U;
short var_3 = (short)27744;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)2192;
short var_15 = (short)-1706;
unsigned char var_16 = (unsigned char)84;
int zero = 0;
long long int var_17 = -7378276328874469102LL;
int var_18 = 2124936389;
unsigned char var_19 = (unsigned char)137;
unsigned int var_20 = 374166821U;
void init() {
}

void checksum() {
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
