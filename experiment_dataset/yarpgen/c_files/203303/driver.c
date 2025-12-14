#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)28747;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-18622;
int var_5 = -1587378220;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)14372;
unsigned int var_10 = 987675276U;
signed char var_11 = (signed char)106;
unsigned int var_14 = 2951935330U;
int var_15 = 2075377314;
int zero = 0;
signed char var_16 = (signed char)72;
unsigned long long int var_17 = 6099850608500739983ULL;
unsigned int var_18 = 2927218427U;
long long int var_19 = -56441043722511874LL;
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
