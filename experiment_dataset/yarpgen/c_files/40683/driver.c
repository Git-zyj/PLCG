#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1314992663;
short var_3 = (short)6218;
long long int var_5 = -5016991501657336439LL;
unsigned int var_6 = 2332127802U;
unsigned int var_8 = 1701935356U;
unsigned short var_10 = (unsigned short)29047;
unsigned char var_12 = (unsigned char)40;
int zero = 0;
long long int var_15 = 2405481180007106537LL;
short var_16 = (short)30401;
unsigned int var_17 = 1231717525U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
