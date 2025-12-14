#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -157601685;
short var_6 = (short)15579;
_Bool var_7 = (_Bool)0;
short var_8 = (short)9570;
short var_13 = (short)29107;
signed char var_14 = (signed char)-84;
long long int var_16 = -7646075605470469869LL;
int zero = 0;
signed char var_18 = (signed char)2;
unsigned char var_19 = (unsigned char)109;
unsigned int var_20 = 1475493612U;
unsigned char var_21 = (unsigned char)247;
signed char var_22 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
