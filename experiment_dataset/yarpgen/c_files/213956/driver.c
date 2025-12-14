#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_5 = 3936311735U;
unsigned short var_6 = (unsigned short)55229;
int var_10 = -1546778795;
int var_13 = -2061398840;
unsigned int var_14 = 1479544316U;
long long int var_15 = -7359506355285333206LL;
unsigned short var_17 = (unsigned short)62108;
int var_18 = 792078206;
int zero = 0;
short var_20 = (short)23642;
long long int var_21 = -6814860497497414122LL;
unsigned short var_22 = (unsigned short)8677;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
