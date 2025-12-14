#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
signed char var_1 = (signed char)57;
unsigned short var_2 = (unsigned short)43392;
unsigned int var_3 = 503795567U;
signed char var_4 = (signed char)-115;
unsigned long long int var_5 = 2932305975060522350ULL;
unsigned int var_6 = 1479944883U;
long long int var_9 = -5365606668225803311LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)142;
short var_14 = (short)16488;
unsigned char var_15 = (unsigned char)144;
int zero = 0;
short var_17 = (short)-18572;
unsigned char var_18 = (unsigned char)78;
void init() {
}

void checksum() {
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
