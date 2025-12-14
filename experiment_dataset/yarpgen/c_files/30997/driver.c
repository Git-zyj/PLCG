#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9615350821556066926ULL;
short var_2 = (short)13048;
unsigned short var_3 = (unsigned short)27028;
short var_4 = (short)12712;
_Bool var_5 = (_Bool)1;
short var_10 = (short)-8753;
long long int var_12 = -7069426799258066716LL;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 313570236;
unsigned char var_16 = (unsigned char)181;
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
