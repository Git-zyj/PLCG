#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)6;
unsigned long long int var_6 = 10591146812581121219ULL;
unsigned int var_8 = 906152234U;
unsigned short var_11 = (unsigned short)19596;
unsigned short var_12 = (unsigned short)2808;
unsigned int var_15 = 2852421909U;
int zero = 0;
unsigned long long int var_18 = 11330293955639209334ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1189296465U;
unsigned int var_21 = 3834351293U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
