#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)186;
unsigned int var_5 = 1309635183U;
unsigned char var_6 = (unsigned char)76;
short var_7 = (short)5007;
int zero = 0;
unsigned long long int var_10 = 13859382706080536326ULL;
unsigned int var_11 = 2133459801U;
unsigned short var_12 = (unsigned short)59316;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
