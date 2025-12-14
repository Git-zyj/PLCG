#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)56038;
signed char var_14 = (signed char)122;
int zero = 0;
unsigned int var_15 = 668049972U;
long long int var_16 = -2093059181702838432LL;
signed char var_17 = (signed char)-67;
int var_18 = -13714901;
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
