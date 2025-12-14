#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned char var_1 = (unsigned char)209;
unsigned char var_2 = (unsigned char)115;
unsigned char var_3 = (unsigned char)169;
short var_4 = (short)559;
unsigned long long int var_5 = 2626750470843251441ULL;
unsigned char var_6 = (unsigned char)173;
short var_7 = (short)-18807;
signed char var_9 = (signed char)106;
unsigned long long int var_11 = 2917982000023894705ULL;
int zero = 0;
unsigned long long int var_12 = 15191195614652574476ULL;
unsigned char var_13 = (unsigned char)30;
unsigned char var_14 = (unsigned char)93;
void init() {
}

void checksum() {
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
