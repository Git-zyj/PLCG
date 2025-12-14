#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6398;
_Bool var_2 = (_Bool)1;
int var_4 = -1688951531;
unsigned int var_7 = 1293999163U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)55;
unsigned int var_14 = 1835294028U;
int zero = 0;
unsigned char var_15 = (unsigned char)50;
short var_16 = (short)3170;
int var_17 = 708206214;
_Bool var_18 = (_Bool)1;
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
