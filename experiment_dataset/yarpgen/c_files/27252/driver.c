#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2838052507U;
unsigned int var_1 = 4080267722U;
unsigned short var_2 = (unsigned short)29940;
unsigned char var_4 = (unsigned char)87;
long long int var_5 = 2144743733345171806LL;
short var_8 = (short)-7370;
int zero = 0;
unsigned long long int var_10 = 2017069422161262990ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)13962;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
