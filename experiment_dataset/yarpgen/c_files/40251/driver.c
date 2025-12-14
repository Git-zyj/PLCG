#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)16778;
short var_3 = (short)27732;
unsigned int var_4 = 2015349659U;
_Bool var_8 = (_Bool)0;
short var_12 = (short)8386;
unsigned char var_13 = (unsigned char)96;
int zero = 0;
long long int var_15 = -6090298202985523656LL;
unsigned short var_16 = (unsigned short)10927;
void init() {
}

void checksum() {
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
