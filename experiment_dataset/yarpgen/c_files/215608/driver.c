#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39845;
short var_2 = (short)-30875;
unsigned int var_5 = 2589778198U;
unsigned long long int var_8 = 2806678620401188663ULL;
long long int var_13 = 7961340808882702479LL;
unsigned short var_14 = (unsigned short)52386;
short var_16 = (short)-8109;
int zero = 0;
short var_19 = (short)32188;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12805748287690317052ULL;
short var_22 = (short)26442;
unsigned long long int var_23 = 15331688726361180290ULL;
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
