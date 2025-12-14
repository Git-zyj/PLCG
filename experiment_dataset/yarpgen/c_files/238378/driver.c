#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)77;
unsigned int var_3 = 1532618489U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-6967;
signed char var_8 = (signed char)-1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)11452;
int zero = 0;
int var_12 = -2042010340;
unsigned char var_13 = (unsigned char)206;
int var_14 = -1428094409;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
