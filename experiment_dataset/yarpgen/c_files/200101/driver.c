#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17397;
unsigned int var_2 = 1464652052U;
_Bool var_3 = (_Bool)1;
short var_7 = (short)3341;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 2106762215784293795ULL;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
