#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)33166;
unsigned long long int var_2 = 3806205625593905866ULL;
long long int var_3 = -8601563286035230174LL;
unsigned long long int var_4 = 776137859165874755ULL;
short var_6 = (short)24549;
int var_7 = -693453461;
unsigned char var_10 = (unsigned char)154;
long long int var_11 = 1251352270507530130LL;
long long int var_12 = 3322504773165075746LL;
unsigned int var_13 = 2891403085U;
unsigned short var_15 = (unsigned short)31794;
int zero = 0;
signed char var_16 = (signed char)-118;
unsigned short var_17 = (unsigned short)2722;
unsigned int var_18 = 880278279U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)58287;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
