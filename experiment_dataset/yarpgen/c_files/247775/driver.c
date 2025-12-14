#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
long long int var_5 = 1057330197610579605LL;
unsigned char var_7 = (unsigned char)89;
short var_8 = (short)27811;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)185;
unsigned char var_13 = (unsigned char)104;
short var_14 = (short)-22672;
unsigned short var_15 = (unsigned short)11766;
short var_16 = (short)14595;
signed char var_19 = (signed char)-17;
int zero = 0;
short var_20 = (short)-241;
long long int var_21 = 5063466414409577395LL;
signed char var_22 = (signed char)49;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
