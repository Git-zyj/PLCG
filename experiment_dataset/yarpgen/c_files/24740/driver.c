#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19254;
long long int var_1 = 4946071606821349088LL;
unsigned int var_2 = 3124114199U;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-12397;
short var_8 = (short)-18081;
unsigned short var_10 = (unsigned short)15793;
unsigned char var_11 = (unsigned char)247;
unsigned int var_12 = 1352874920U;
unsigned char var_13 = (unsigned char)46;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 375814873U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
