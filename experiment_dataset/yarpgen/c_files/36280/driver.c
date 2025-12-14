#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-280;
unsigned int var_3 = 1828680150U;
short var_5 = (short)23025;
unsigned long long int var_9 = 8073490285876503959ULL;
unsigned short var_10 = (unsigned short)48303;
unsigned long long int var_14 = 4298326652354121826ULL;
int var_15 = 1606211422;
int var_16 = -1373311490;
unsigned short var_17 = (unsigned short)35409;
short var_18 = (short)-4808;
int zero = 0;
unsigned int var_19 = 1142515408U;
_Bool var_20 = (_Bool)1;
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
