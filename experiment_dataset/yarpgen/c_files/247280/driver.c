#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30187;
unsigned int var_1 = 4174650765U;
unsigned char var_2 = (unsigned char)193;
signed char var_3 = (signed char)-114;
signed char var_4 = (signed char)119;
signed char var_5 = (signed char)-65;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 1033906638700143563ULL;
signed char var_8 = (signed char)30;
long long int var_9 = -3065546420429041132LL;
int zero = 0;
int var_10 = 1555049842;
long long int var_11 = 9063156311820191172LL;
int var_12 = 675700626;
unsigned short var_13 = (unsigned short)21644;
long long int var_14 = -6943989332815119581LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
