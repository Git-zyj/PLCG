#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22742;
_Bool var_3 = (_Bool)0;
int var_5 = -2075949750;
signed char var_7 = (signed char)65;
long long int var_9 = 6012665491283504430LL;
int zero = 0;
unsigned char var_10 = (unsigned char)134;
int var_11 = -1755026807;
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
