#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46915;
unsigned int var_2 = 3676509822U;
unsigned int var_3 = 935606051U;
unsigned int var_4 = 4162277218U;
short var_6 = (short)4280;
short var_7 = (short)-30285;
long long int var_9 = -3074195004591502211LL;
int zero = 0;
signed char var_10 = (signed char)95;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4611035214616041797LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
