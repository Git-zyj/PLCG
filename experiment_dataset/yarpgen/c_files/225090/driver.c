#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2001449930;
unsigned long long int var_1 = 16669155139360420364ULL;
short var_9 = (short)-15835;
unsigned long long int var_10 = 17086123127314400742ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 12839160794119813954ULL;
int zero = 0;
long long int var_14 = -2718590642828409375LL;
short var_15 = (short)11320;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 823361943592075393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
