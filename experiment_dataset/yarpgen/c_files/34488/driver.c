#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)7089;
short var_4 = (short)-7416;
short var_5 = (short)-18432;
unsigned short var_6 = (unsigned short)2126;
long long int var_15 = -3911086332028220601LL;
short var_16 = (short)-14798;
int zero = 0;
short var_19 = (short)32751;
unsigned int var_20 = 211788334U;
unsigned char var_21 = (unsigned char)167;
unsigned int var_22 = 3798095491U;
unsigned long long int var_23 = 12256298201918828740ULL;
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
