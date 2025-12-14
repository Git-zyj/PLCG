#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_6 = 1273807393;
short var_7 = (short)9180;
_Bool var_10 = (_Bool)0;
int var_16 = 1485657439;
int zero = 0;
signed char var_19 = (signed char)-68;
signed char var_20 = (signed char)-32;
signed char var_21 = (signed char)-54;
void init() {
}

void checksum() {
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
