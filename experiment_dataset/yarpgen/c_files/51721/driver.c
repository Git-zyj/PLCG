#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15999442452810841288ULL;
unsigned long long int var_1 = 4076054867411102407ULL;
int var_5 = 1273039622;
int var_6 = 150033603;
unsigned int var_8 = 3240626368U;
_Bool var_9 = (_Bool)0;
int var_10 = -1848671070;
unsigned long long int var_14 = 11157613614043030514ULL;
unsigned char var_16 = (unsigned char)32;
unsigned char var_17 = (unsigned char)17;
int zero = 0;
unsigned int var_18 = 3205292186U;
signed char var_19 = (signed char)35;
unsigned long long int var_20 = 10191775150991323471ULL;
unsigned char var_21 = (unsigned char)109;
unsigned char var_22 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
