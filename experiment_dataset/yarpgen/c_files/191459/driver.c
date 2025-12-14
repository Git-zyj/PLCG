#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 104121181U;
short var_4 = (short)-17113;
_Bool var_6 = (_Bool)0;
int var_8 = 2072419611;
short var_9 = (short)-13952;
unsigned short var_12 = (unsigned short)58919;
int zero = 0;
long long int var_13 = -3425741781567975787LL;
unsigned short var_14 = (unsigned short)30183;
short var_15 = (short)26302;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
