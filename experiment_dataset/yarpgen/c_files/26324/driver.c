#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-934;
unsigned long long int var_2 = 17983848188576068999ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 2334247841U;
short var_9 = (short)8796;
int zero = 0;
short var_15 = (short)-17729;
short var_16 = (short)11168;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
