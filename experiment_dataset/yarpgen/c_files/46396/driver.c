#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16688;
unsigned long long int var_1 = 9372377914591844366ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)7618;
short var_18 = (short)16335;
short var_19 = (short)11249;
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
