#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42043;
_Bool var_5 = (_Bool)1;
int var_12 = -276553761;
long long int var_15 = 103254288486446951LL;
short var_18 = (short)8587;
int zero = 0;
short var_20 = (short)-9601;
int var_21 = -2073966920;
int var_22 = -704216012;
short var_23 = (short)15137;
void init() {
}

void checksum() {
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
