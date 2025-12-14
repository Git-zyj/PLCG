#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)6224;
int var_6 = 837172171;
_Bool var_7 = (_Bool)1;
int var_8 = 1110557042;
int var_11 = 471974496;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-6202;
short var_14 = (short)29609;
unsigned short var_15 = (unsigned short)46396;
int var_16 = -343479712;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
