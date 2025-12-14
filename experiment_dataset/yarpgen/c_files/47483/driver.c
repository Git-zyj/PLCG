#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1827079391;
short var_3 = (short)17828;
short var_4 = (short)7257;
_Bool var_5 = (_Bool)0;
short var_6 = (short)9761;
short var_7 = (short)-17927;
_Bool var_8 = (_Bool)1;
int var_10 = -1191668862;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3936153317U;
_Bool var_17 = (_Bool)1;
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
