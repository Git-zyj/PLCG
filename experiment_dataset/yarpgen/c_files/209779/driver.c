#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11532;
unsigned char var_2 = (unsigned char)94;
unsigned long long int var_3 = 17443167116061730161ULL;
short var_4 = (short)-1141;
short var_5 = (short)-30984;
short var_9 = (short)-15637;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 38861251U;
unsigned int var_12 = 3418295125U;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)165;
unsigned int var_16 = 2895959686U;
_Bool var_17 = (_Bool)0;
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
