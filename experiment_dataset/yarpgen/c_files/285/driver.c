#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26554;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 17861923633838813042ULL;
unsigned int var_11 = 3079960425U;
int zero = 0;
unsigned int var_13 = 3109100244U;
short var_14 = (short)9507;
short var_15 = (short)-3402;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
