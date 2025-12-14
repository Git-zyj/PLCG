#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29732;
unsigned int var_3 = 2891781072U;
unsigned int var_6 = 840095218U;
short var_7 = (short)2842;
unsigned short var_14 = (unsigned short)63784;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10638999519885840840ULL;
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
