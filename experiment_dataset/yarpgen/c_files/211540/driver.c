#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)107;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-61;
short var_8 = (short)2217;
short var_13 = (short)14276;
signed char var_16 = (signed char)49;
int zero = 0;
short var_17 = (short)32518;
unsigned int var_18 = 2675194524U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
