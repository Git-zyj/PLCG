#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
unsigned short var_2 = (unsigned short)28770;
unsigned long long int var_4 = 6704709814508384629ULL;
signed char var_6 = (signed char)-62;
short var_7 = (short)-32256;
signed char var_9 = (signed char)28;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-13;
unsigned short var_12 = (unsigned short)45681;
_Bool var_14 = (_Bool)1;
short var_16 = (short)-23454;
int zero = 0;
unsigned short var_17 = (unsigned short)26279;
_Bool var_18 = (_Bool)1;
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
