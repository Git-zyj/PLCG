#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23755;
int var_1 = 1242899995;
short var_2 = (short)-4618;
long long int var_3 = 7384335374134372384LL;
unsigned int var_7 = 650503034U;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-3770;
unsigned short var_12 = (unsigned short)54258;
long long int var_14 = 3365474397846669096LL;
int zero = 0;
short var_15 = (short)11763;
unsigned char var_16 = (unsigned char)201;
unsigned long long int var_17 = 7165810580991389084ULL;
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
