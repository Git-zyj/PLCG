#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8489;
unsigned int var_1 = 784843992U;
signed char var_15 = (signed char)-78;
_Bool var_16 = (_Bool)1;
long long int var_17 = -5616521199435062233LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 1556624310;
int var_21 = 369742580;
long long int var_22 = -46617948769060841LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
