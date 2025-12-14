#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1827795833U;
unsigned int var_7 = 135773598U;
unsigned long long int var_11 = 1286847258127543737ULL;
unsigned long long int var_14 = 16808709763614945190ULL;
int zero = 0;
unsigned int var_18 = 2907032042U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)30031;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
