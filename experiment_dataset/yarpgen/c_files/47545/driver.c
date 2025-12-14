#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
_Bool var_1 = (_Bool)0;
long long int var_2 = 1897321593577092618LL;
signed char var_3 = (signed char)-48;
int var_8 = -1647551563;
short var_10 = (short)1885;
int zero = 0;
unsigned short var_11 = (unsigned short)8595;
unsigned int var_12 = 3409340272U;
short var_13 = (short)-7820;
unsigned short var_14 = (unsigned short)14859;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
