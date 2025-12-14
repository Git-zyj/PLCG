#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -75977368;
unsigned int var_1 = 509376161U;
long long int var_2 = 7293208734238852787LL;
short var_4 = (short)-4780;
unsigned char var_5 = (unsigned char)143;
unsigned long long int var_6 = 4536105576459567335ULL;
long long int var_8 = 2596292308695811253LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)165;
int var_12 = 256037182;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
unsigned int var_15 = 2080297254U;
long long int var_16 = -9157484228720963183LL;
void init() {
}

void checksum() {
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
