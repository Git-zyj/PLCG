#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)3513;
unsigned int var_11 = 421789494U;
unsigned long long int var_12 = 14271169334422327409ULL;
int zero = 0;
unsigned int var_16 = 331401784U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)23812;
unsigned long long int var_19 = 10811979745230832833ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
