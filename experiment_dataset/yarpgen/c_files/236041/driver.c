#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
short var_4 = (short)-18519;
unsigned char var_6 = (unsigned char)12;
long long int var_11 = -9162293587090940315LL;
unsigned long long int var_13 = 5034056832574131388ULL;
unsigned long long int var_15 = 3262654693056389295ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2967713607U;
long long int var_20 = -3753732006872520546LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
