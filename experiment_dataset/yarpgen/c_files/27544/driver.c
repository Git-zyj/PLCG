#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = 1474581051;
int var_6 = -1499792865;
unsigned char var_8 = (unsigned char)246;
int var_10 = -429721070;
unsigned short var_11 = (unsigned short)48982;
short var_13 = (short)-6868;
int zero = 0;
short var_16 = (short)1975;
unsigned int var_17 = 1066377059U;
_Bool var_18 = (_Bool)1;
long long int var_19 = 1610488597641603839LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
