#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3708306163U;
unsigned char var_4 = (unsigned char)29;
short var_5 = (short)3550;
short var_6 = (short)-30610;
unsigned int var_7 = 935518692U;
unsigned short var_9 = (unsigned short)17066;
unsigned int var_10 = 715487246U;
long long int var_11 = -6998362255072372353LL;
int zero = 0;
unsigned int var_12 = 2243174132U;
int var_13 = 230006262;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
