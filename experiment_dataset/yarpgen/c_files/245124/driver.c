#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned long long int var_1 = 7205006177408708276ULL;
short var_2 = (short)-31276;
unsigned short var_3 = (unsigned short)25676;
unsigned char var_4 = (unsigned char)140;
unsigned int var_5 = 3350151161U;
unsigned char var_6 = (unsigned char)126;
unsigned short var_7 = (unsigned short)54700;
long long int var_9 = -4179521759204300604LL;
unsigned long long int var_12 = 17886267042116545467ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)248;
_Bool var_14 = (_Bool)1;
short var_15 = (short)23429;
unsigned short var_16 = (unsigned short)52579;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
