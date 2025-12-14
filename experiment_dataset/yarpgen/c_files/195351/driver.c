#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5362486553346630518LL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)90;
int var_5 = 1298099534;
unsigned long long int var_6 = 15679117809062720909ULL;
int var_8 = 210843129;
unsigned int var_9 = 1072488477U;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)28951;
int zero = 0;
unsigned int var_16 = 707799397U;
long long int var_17 = 4897447676030208182LL;
short var_18 = (short)3410;
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
