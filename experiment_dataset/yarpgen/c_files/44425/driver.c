#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_8 = -341784567;
int zero = 0;
unsigned short var_17 = (unsigned short)8603;
unsigned char var_18 = (unsigned char)200;
unsigned short var_19 = (unsigned short)51571;
unsigned short var_20 = (unsigned short)33332;
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
