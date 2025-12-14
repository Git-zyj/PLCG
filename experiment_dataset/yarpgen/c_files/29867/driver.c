#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15375;
unsigned char var_1 = (unsigned char)191;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)158;
signed char var_5 = (signed char)-112;
unsigned int var_7 = 1961265307U;
int var_8 = -730522349;
unsigned int var_11 = 837530970U;
long long int var_12 = -8278380453456238778LL;
unsigned char var_15 = (unsigned char)223;
int zero = 0;
signed char var_16 = (signed char)-64;
signed char var_17 = (signed char)78;
signed char var_18 = (signed char)92;
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
