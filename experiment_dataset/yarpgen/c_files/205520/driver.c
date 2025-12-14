#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-93;
unsigned int var_6 = 543712690U;
short var_7 = (short)-23873;
int var_10 = -1240916777;
unsigned int var_11 = 1381307678U;
unsigned short var_12 = (unsigned short)49296;
int zero = 0;
long long int var_13 = -9140436887578026619LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3777789781U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
