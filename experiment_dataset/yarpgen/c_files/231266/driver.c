#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2949969980U;
unsigned int var_5 = 4032507527U;
long long int var_7 = -1562644601784987669LL;
unsigned int var_8 = 3801832811U;
long long int var_10 = 5270521369528626140LL;
unsigned int var_11 = 770839526U;
unsigned long long int var_13 = 13749463218641569653ULL;
unsigned short var_14 = (unsigned short)29152;
unsigned int var_15 = 4131684372U;
int zero = 0;
long long int var_16 = 5527421410858109606LL;
unsigned long long int var_17 = 5551700003429176232ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
