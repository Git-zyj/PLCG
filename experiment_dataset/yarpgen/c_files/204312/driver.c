#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32231;
int var_3 = -51743494;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-25376;
unsigned short var_10 = (unsigned short)5106;
int var_12 = 1818397923;
unsigned long long int var_15 = 1944674814492079097ULL;
unsigned long long int var_16 = 7284344290152953493ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)60;
unsigned int var_20 = 2123937500U;
int var_21 = 1330750803;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
