#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-5327;
unsigned int var_3 = 3522466003U;
int var_4 = -1288036898;
unsigned short var_6 = (unsigned short)27006;
int var_12 = 1088334620;
unsigned long long int var_13 = 2247756206728743809ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = -307248659;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11112841135679030740ULL;
void init() {
}

void checksum() {
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
