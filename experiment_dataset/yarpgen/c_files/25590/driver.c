#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 2935095439U;
unsigned long long int var_7 = 7510155023951985586ULL;
long long int var_9 = 1403224992572840865LL;
short var_11 = (short)-7064;
unsigned char var_15 = (unsigned char)76;
signed char var_16 = (signed char)127;
int zero = 0;
short var_17 = (short)-29904;
short var_18 = (short)24524;
long long int var_19 = 7128046871236650744LL;
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
