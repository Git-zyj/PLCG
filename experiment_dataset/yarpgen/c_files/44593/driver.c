#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 991959074U;
unsigned char var_1 = (unsigned char)111;
short var_4 = (short)11812;
unsigned short var_6 = (unsigned short)1001;
unsigned char var_8 = (unsigned char)165;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1961769962U;
unsigned long long int var_12 = 16628018064830063557ULL;
signed char var_13 = (signed char)99;
unsigned short var_14 = (unsigned short)54290;
void init() {
}

void checksum() {
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
