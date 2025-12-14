#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24099;
unsigned char var_10 = (unsigned char)236;
unsigned int var_13 = 61791010U;
unsigned long long int var_16 = 15972674041517005132ULL;
long long int var_18 = 6892600782802432336LL;
int zero = 0;
unsigned long long int var_19 = 10446002422648402022ULL;
unsigned long long int var_20 = 18115802468245367239ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
short var_23 = (short)19980;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
