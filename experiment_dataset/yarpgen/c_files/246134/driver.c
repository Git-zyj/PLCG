#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12963;
unsigned short var_2 = (unsigned short)43247;
int var_4 = 600893893;
int var_7 = 1668311589;
long long int var_8 = -3031984449111823497LL;
unsigned long long int var_9 = 11196679735911017734ULL;
int var_10 = -1866875822;
unsigned int var_11 = 1734568126U;
unsigned short var_13 = (unsigned short)47861;
unsigned int var_14 = 2572862490U;
long long int var_15 = 1390450245895668013LL;
unsigned short var_16 = (unsigned short)48887;
int zero = 0;
signed char var_17 = (signed char)24;
unsigned short var_18 = (unsigned short)40462;
unsigned char var_19 = (unsigned char)62;
_Bool var_20 = (_Bool)0;
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
