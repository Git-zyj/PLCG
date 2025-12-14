#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3755492179246054531LL;
unsigned short var_2 = (unsigned short)1951;
unsigned short var_4 = (unsigned short)33784;
int var_7 = -2040330505;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)-22;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3235334697U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
