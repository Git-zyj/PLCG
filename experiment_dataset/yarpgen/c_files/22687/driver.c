#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1422022983;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3802781874U;
unsigned int var_3 = 3775184244U;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)54254;
long long int var_8 = 118857994213767231LL;
short var_9 = (short)13952;
unsigned long long int var_10 = 5006544729098819640ULL;
_Bool var_11 = (_Bool)0;
int var_13 = 1397017821;
int zero = 0;
unsigned char var_14 = (unsigned char)236;
int var_15 = 893013575;
unsigned long long int var_16 = 14365611701335198491ULL;
signed char var_17 = (signed char)-55;
unsigned int var_18 = 1590467390U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
