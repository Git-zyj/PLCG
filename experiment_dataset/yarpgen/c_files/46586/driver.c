#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)114;
unsigned int var_3 = 1188271133U;
long long int var_4 = -6423767479792583876LL;
signed char var_6 = (signed char)-8;
_Bool var_11 = (_Bool)0;
long long int var_12 = -8105488144439327304LL;
unsigned int var_14 = 1142581105U;
int zero = 0;
unsigned long long int var_15 = 12669329344772643861ULL;
unsigned char var_16 = (unsigned char)134;
void init() {
}

void checksum() {
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
