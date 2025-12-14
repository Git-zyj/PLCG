#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
int var_4 = 299884482;
unsigned char var_5 = (unsigned char)248;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)187;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-2;
int zero = 0;
long long int var_14 = 988658470123371208LL;
unsigned short var_15 = (unsigned short)17422;
unsigned int var_16 = 1272141701U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
