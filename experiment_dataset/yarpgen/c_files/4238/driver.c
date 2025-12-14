#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2038119675995264853ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 1678697703U;
unsigned short var_15 = (unsigned short)58021;
int var_18 = 331844823;
int zero = 0;
signed char var_19 = (signed char)-9;
short var_20 = (short)-22092;
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
