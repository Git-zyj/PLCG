#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
signed char var_1 = (signed char)-123;
unsigned int var_2 = 546911295U;
long long int var_3 = -1150644828520520385LL;
unsigned short var_6 = (unsigned short)33518;
unsigned long long int var_7 = 7131652953901129998ULL;
signed char var_8 = (signed char)-16;
unsigned char var_9 = (unsigned char)227;
long long int var_11 = -3396825275495192441LL;
signed char var_12 = (signed char)1;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)32;
int zero = 0;
long long int var_16 = 1736121018530134121LL;
long long int var_17 = 423066477260108004LL;
unsigned int var_18 = 3051134958U;
long long int var_19 = -8714854652556584559LL;
signed char var_20 = (signed char)102;
unsigned int var_21 = 4230440170U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3102213043U;
unsigned char var_24 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
