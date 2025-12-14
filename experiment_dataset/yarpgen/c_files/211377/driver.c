#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 924479678U;
unsigned long long int var_3 = 2203113039726884275ULL;
unsigned char var_7 = (unsigned char)211;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_13 = (short)31675;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)241;
unsigned char var_19 = (unsigned char)63;
void init() {
}

void checksum() {
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
