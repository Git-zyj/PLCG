#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18965;
unsigned int var_5 = 1018434836U;
short var_7 = (short)8644;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 2018753639;
void init() {
}

void checksum() {
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
