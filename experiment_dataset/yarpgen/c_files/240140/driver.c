#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2118;
short var_3 = (short)29345;
unsigned char var_4 = (unsigned char)215;
unsigned short var_7 = (unsigned short)63781;
int zero = 0;
long long int var_10 = 6754501249424523161LL;
signed char var_11 = (signed char)-124;
unsigned int var_12 = 2351236317U;
short var_13 = (short)1664;
unsigned short var_14 = (unsigned short)4322;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
