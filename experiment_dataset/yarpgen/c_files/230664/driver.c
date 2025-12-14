#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26151;
unsigned short var_3 = (unsigned short)23950;
long long int var_7 = -1021077512837549497LL;
unsigned int var_9 = 2925700960U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 9836900045167805020ULL;
int zero = 0;
short var_17 = (short)-28218;
unsigned short var_18 = (unsigned short)3590;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
