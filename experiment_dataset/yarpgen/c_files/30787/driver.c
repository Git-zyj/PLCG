#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3493;
int var_1 = -1860142364;
unsigned int var_3 = 2014373829U;
unsigned short var_4 = (unsigned short)11336;
unsigned short var_6 = (unsigned short)14931;
unsigned int var_7 = 3322081856U;
unsigned char var_8 = (unsigned char)171;
unsigned char var_9 = (unsigned char)29;
signed char var_10 = (signed char)78;
short var_11 = (short)-26798;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-20886;
int zero = 0;
signed char var_14 = (signed char)-4;
unsigned short var_15 = (unsigned short)64764;
unsigned long long int var_16 = 4802655411720692561ULL;
long long int var_17 = 5420399780813797045LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
