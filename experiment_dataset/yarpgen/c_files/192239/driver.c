#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3123;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)28520;
unsigned int var_5 = 2853021293U;
unsigned short var_8 = (unsigned short)51991;
unsigned short var_10 = (unsigned short)39539;
unsigned long long int var_12 = 7528927098269543598ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)43170;
unsigned int var_16 = 1208605315U;
unsigned short var_17 = (unsigned short)54373;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
