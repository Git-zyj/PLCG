#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -218421883;
int var_4 = -705620349;
unsigned int var_5 = 3677429863U;
signed char var_8 = (signed char)67;
unsigned long long int var_9 = 11674894874426638079ULL;
unsigned int var_12 = 2673208093U;
int var_14 = 1202701672;
unsigned char var_16 = (unsigned char)65;
int zero = 0;
unsigned int var_17 = 896278348U;
signed char var_18 = (signed char)3;
_Bool var_19 = (_Bool)0;
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
