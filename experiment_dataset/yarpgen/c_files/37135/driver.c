#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9144134115115519471LL;
short var_2 = (short)29705;
unsigned short var_3 = (unsigned short)2004;
unsigned short var_6 = (unsigned short)56328;
unsigned char var_7 = (unsigned char)171;
unsigned short var_8 = (unsigned short)12636;
unsigned long long int var_11 = 1166021235350289899ULL;
unsigned short var_14 = (unsigned short)29263;
unsigned long long int var_15 = 10789763469204433657ULL;
signed char var_17 = (signed char)6;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4109743638U;
int var_20 = -166585418;
_Bool var_21 = (_Bool)0;
int var_22 = -1006021599;
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
