#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30284;
unsigned int var_5 = 1062132348U;
unsigned short var_6 = (unsigned short)53854;
unsigned short var_10 = (unsigned short)6967;
unsigned int var_14 = 3656703470U;
unsigned short var_15 = (unsigned short)28696;
int zero = 0;
unsigned short var_19 = (unsigned short)12328;
unsigned int var_20 = 1785641329U;
unsigned char var_21 = (unsigned char)243;
unsigned short var_22 = (unsigned short)24399;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
