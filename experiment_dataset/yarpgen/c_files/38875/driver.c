#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)15214;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 728114977U;
int zero = 0;
long long int var_15 = -5765690152736266000LL;
long long int var_16 = 124870836565205861LL;
signed char var_17 = (signed char)95;
long long int var_18 = 1129343545898008654LL;
void init() {
}

void checksum() {
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
