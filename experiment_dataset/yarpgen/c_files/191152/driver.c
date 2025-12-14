#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8750;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-26547;
unsigned int var_6 = 1362944457U;
short var_7 = (short)24923;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 169836670U;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-21287;
unsigned int var_15 = 2005411159U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
