#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-16784;
int var_9 = 2138496362;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2457313698U;
signed char var_13 = (signed char)7;
signed char var_14 = (signed char)-61;
int zero = 0;
long long int var_16 = 7482728985933434581LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
