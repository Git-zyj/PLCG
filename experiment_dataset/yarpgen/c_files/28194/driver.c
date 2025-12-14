#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1129445012578596484ULL;
signed char var_4 = (signed char)77;
unsigned long long int var_6 = 9350947633415626512ULL;
unsigned char var_7 = (unsigned char)217;
unsigned long long int var_8 = 17860577029731375847ULL;
long long int var_10 = 5181522113092107571LL;
signed char var_11 = (signed char)11;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)2046;
unsigned char var_16 = (unsigned char)212;
long long int var_17 = -3283950339528938938LL;
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
