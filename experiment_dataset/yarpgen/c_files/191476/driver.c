#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 469053751U;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 128241123U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3340918913U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3664678165U;
unsigned int var_8 = 2816047270U;
unsigned int var_11 = 2912435042U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 814863616U;
unsigned int var_15 = 140240917U;
unsigned int var_16 = 2617525810U;
unsigned int var_17 = 4161249557U;
unsigned int var_18 = 2571087336U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
