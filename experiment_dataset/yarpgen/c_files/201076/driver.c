#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
signed char var_6 = (signed char)48;
short var_7 = (short)21167;
unsigned char var_8 = (unsigned char)232;
unsigned long long int var_9 = 16891928690112208463ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)28;
long long int var_15 = 5995621933651583664LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1544340216246250002ULL;
unsigned char var_18 = (unsigned char)230;
int zero = 0;
unsigned short var_19 = (unsigned short)23094;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
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
