#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)242;
unsigned short var_4 = (unsigned short)17107;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)59295;
int var_9 = 217925715;
_Bool var_10 = (_Bool)1;
long long int var_12 = 8934439886833848618LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)112;
int var_17 = -919146140;
unsigned char var_18 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
