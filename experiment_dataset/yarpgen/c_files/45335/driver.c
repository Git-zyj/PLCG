#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3124846219033493454LL;
signed char var_1 = (signed char)-67;
int var_3 = 517893100;
unsigned long long int var_8 = 8806611905546919183ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 1861657654U;
unsigned short var_15 = (unsigned short)44007;
int zero = 0;
long long int var_16 = -7867315640912753996LL;
unsigned short var_17 = (unsigned short)37242;
int var_18 = 339900434;
void init() {
}

void checksum() {
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
