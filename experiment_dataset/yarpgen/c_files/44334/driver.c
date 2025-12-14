#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 307857261U;
unsigned int var_3 = 475966716U;
int var_5 = -735097848;
unsigned int var_6 = 4282592855U;
unsigned int var_9 = 3775867458U;
signed char var_10 = (signed char)-32;
signed char var_11 = (signed char)126;
signed char var_12 = (signed char)28;
int var_13 = 1712756880;
unsigned long long int var_14 = 2187380092558785540ULL;
unsigned int var_18 = 556664096U;
unsigned int var_19 = 3321745773U;
int zero = 0;
long long int var_20 = -610643051836443976LL;
unsigned short var_21 = (unsigned short)33956;
short var_22 = (short)17665;
signed char var_23 = (signed char)-22;
unsigned int var_24 = 3591702772U;
void init() {
}

void checksum() {
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
