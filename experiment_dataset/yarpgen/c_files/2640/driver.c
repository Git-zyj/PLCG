#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6329720900200808138LL;
int var_1 = -1503914750;
unsigned char var_2 = (unsigned char)70;
unsigned char var_3 = (unsigned char)114;
signed char var_4 = (signed char)-26;
unsigned short var_5 = (unsigned short)19627;
unsigned short var_6 = (unsigned short)44709;
_Bool var_7 = (_Bool)1;
long long int var_8 = 2633523810111114907LL;
unsigned char var_9 = (unsigned char)237;
short var_10 = (short)-2132;
unsigned char var_11 = (unsigned char)119;
signed char var_12 = (signed char)-58;
long long int var_13 = 2758534213893604665LL;
unsigned int var_14 = 1701609265U;
signed char var_15 = (signed char)-30;
int zero = 0;
unsigned char var_16 = (unsigned char)78;
signed char var_17 = (signed char)-21;
signed char var_18 = (signed char)113;
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
