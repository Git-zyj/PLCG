#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
unsigned char var_2 = (unsigned char)226;
unsigned int var_3 = 2450259273U;
long long int var_4 = -5259845295457582558LL;
int var_5 = -847806093;
unsigned char var_6 = (unsigned char)47;
_Bool var_9 = (_Bool)1;
int var_11 = -817686215;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)64818;
_Bool var_17 = (_Bool)1;
int var_18 = 701149122;
int zero = 0;
unsigned short var_19 = (unsigned short)60642;
unsigned int var_20 = 2923341073U;
unsigned long long int var_21 = 13581815296347899715ULL;
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
