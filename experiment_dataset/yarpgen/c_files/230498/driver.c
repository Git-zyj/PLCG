#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1126188069U;
unsigned long long int var_7 = 7182434539480737135ULL;
unsigned int var_12 = 3039576778U;
unsigned long long int var_13 = 16489463072838869215ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = -2087538078;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2620784960U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
