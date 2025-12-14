#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 30762087U;
unsigned short var_1 = (unsigned short)25461;
_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)109;
unsigned short var_9 = (unsigned short)8894;
int var_11 = 1719806185;
int var_12 = 182813972;
unsigned short var_13 = (unsigned short)13950;
signed char var_14 = (signed char)99;
unsigned int var_16 = 444948491U;
unsigned short var_17 = (unsigned short)9372;
unsigned int var_18 = 639346437U;
int zero = 0;
long long int var_19 = -1133670471149253149LL;
unsigned char var_20 = (unsigned char)92;
long long int var_21 = -6633013499585606671LL;
unsigned char var_22 = (unsigned char)64;
void init() {
}

void checksum() {
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
