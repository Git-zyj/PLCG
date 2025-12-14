#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2139;
int var_4 = 506234485;
unsigned int var_5 = 1944500537U;
short var_7 = (short)3396;
long long int var_13 = 1876459282461690625LL;
signed char var_17 = (signed char)-54;
int var_18 = -1599928424;
int zero = 0;
unsigned int var_19 = 3178103650U;
unsigned char var_20 = (unsigned char)175;
long long int var_21 = 319021582523155534LL;
long long int var_22 = -2109876967244207409LL;
signed char var_23 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
