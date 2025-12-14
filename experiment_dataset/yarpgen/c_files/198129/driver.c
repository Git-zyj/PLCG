#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2531835495U;
long long int var_7 = 100393994973684922LL;
unsigned long long int var_10 = 17152039363271143107ULL;
unsigned char var_11 = (unsigned char)232;
unsigned int var_16 = 3631369529U;
unsigned long long int var_17 = 12644505246824699782ULL;
int zero = 0;
unsigned int var_19 = 1007156838U;
unsigned long long int var_20 = 14808347878860670251ULL;
long long int var_21 = -2642816329981455128LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = 8558571112140973979LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
