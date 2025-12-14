#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)1;
int var_3 = -2000691949;
short var_6 = (short)11552;
unsigned char var_8 = (unsigned char)95;
signed char var_9 = (signed char)122;
short var_10 = (short)28604;
unsigned short var_14 = (unsigned short)25437;
short var_16 = (short)-25259;
unsigned short var_17 = (unsigned short)17822;
short var_18 = (short)-22785;
long long int var_19 = -7534690608188053468LL;
int zero = 0;
signed char var_20 = (signed char)-20;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)(-127 - 1);
unsigned int var_23 = 3479201448U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
