#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)29;
unsigned int var_3 = 3215783114U;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int var_12 = 539293257;
signed char var_14 = (signed char)50;
unsigned char var_15 = (unsigned char)86;
int zero = 0;
unsigned short var_16 = (unsigned short)53455;
int var_17 = -1192677728;
short var_18 = (short)-3700;
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
