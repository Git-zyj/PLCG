#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1628800824;
unsigned short var_1 = (unsigned short)10865;
int var_2 = -335241299;
unsigned short var_4 = (unsigned short)59092;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)161;
long long int var_8 = 3330701862769814087LL;
unsigned char var_9 = (unsigned char)236;
int zero = 0;
unsigned int var_10 = 3562686418U;
signed char var_11 = (signed char)-61;
long long int var_12 = 3365794334209280159LL;
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
