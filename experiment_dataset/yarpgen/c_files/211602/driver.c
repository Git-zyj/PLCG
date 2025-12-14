#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
_Bool var_2 = (_Bool)0;
long long int var_3 = 4450333641319164914LL;
unsigned long long int var_4 = 16904716560199832381ULL;
unsigned char var_5 = (unsigned char)1;
short var_6 = (short)5750;
unsigned short var_7 = (unsigned short)9761;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 1588060887565960952ULL;
int var_11 = 875596501;
int zero = 0;
int var_12 = 1365109545;
int var_13 = 1664478659;
unsigned long long int var_14 = 1825428823611329407ULL;
int var_15 = -1885747965;
unsigned char var_16 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
