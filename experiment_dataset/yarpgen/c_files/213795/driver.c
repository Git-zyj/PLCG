#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6839;
unsigned long long int var_6 = 13012306929484072724ULL;
int var_8 = 191224948;
unsigned int var_10 = 2302610968U;
short var_14 = (short)-9256;
int zero = 0;
unsigned int var_16 = 3862033235U;
signed char var_17 = (signed char)113;
int var_18 = -449611102;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
