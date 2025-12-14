#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31314;
long long int var_3 = -203076368351561494LL;
short var_4 = (short)10712;
unsigned int var_6 = 2360538620U;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 2966017811850078559ULL;
unsigned long long int var_11 = 11835991445200965287ULL;
unsigned long long int var_12 = 4460443546991720295ULL;
unsigned long long int var_13 = 12681320839755156703ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
