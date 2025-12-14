#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 365115626843048210ULL;
signed char var_2 = (signed char)-3;
unsigned int var_4 = 147930317U;
long long int var_6 = 7151250803553599323LL;
unsigned int var_8 = 917123097U;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)85;
long long int var_11 = 501850942910770647LL;
long long int var_12 = 2612537105816268715LL;
signed char var_13 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
