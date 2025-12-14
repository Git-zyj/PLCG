#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)30852;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)16932;
unsigned short var_14 = (unsigned short)59752;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-31229;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)18436;
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
