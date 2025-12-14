#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned char var_1 = (unsigned char)3;
signed char var_4 = (signed char)-112;
unsigned short var_5 = (unsigned short)22140;
unsigned char var_6 = (unsigned char)14;
short var_8 = (short)28103;
short var_9 = (short)-14662;
int zero = 0;
unsigned int var_10 = 3181071104U;
unsigned short var_11 = (unsigned short)18322;
unsigned int var_12 = 3386731760U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1125194816U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
