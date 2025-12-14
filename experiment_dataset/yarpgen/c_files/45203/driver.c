#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1818921084;
unsigned int var_2 = 4160940801U;
unsigned long long int var_7 = 16621673992003292366ULL;
int var_11 = -704960184;
unsigned int var_13 = 2019454439U;
unsigned int var_14 = 4080743020U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)62614;
int var_18 = -1857636144;
unsigned char var_19 = (unsigned char)92;
unsigned char var_20 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
