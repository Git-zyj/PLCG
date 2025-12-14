#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 193745666198846190ULL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)44;
unsigned char var_5 = (unsigned char)91;
unsigned long long int var_7 = 537305132174482437ULL;
signed char var_8 = (signed char)14;
unsigned int var_10 = 146937391U;
unsigned char var_11 = (unsigned char)30;
long long int var_12 = 2369236012264806638LL;
long long int var_14 = 3489632290298102725LL;
int zero = 0;
int var_17 = 381580747;
signed char var_18 = (signed char)31;
signed char var_19 = (signed char)-91;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
