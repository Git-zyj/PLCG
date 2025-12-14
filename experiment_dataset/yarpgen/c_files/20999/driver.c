#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_2 = -4374872466187414393LL;
unsigned short var_4 = (unsigned short)28184;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_11 = -7181697836503344481LL;
long long int var_12 = -8877770032640299659LL;
signed char var_13 = (signed char)53;
unsigned short var_14 = (unsigned short)11257;
long long int var_15 = -3152243511170384205LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
