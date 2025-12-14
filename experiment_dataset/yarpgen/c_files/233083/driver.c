#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17773084392669043992ULL;
unsigned char var_2 = (unsigned char)88;
short var_3 = (short)4939;
signed char var_5 = (signed char)103;
signed char var_6 = (signed char)11;
unsigned char var_7 = (unsigned char)198;
unsigned int var_10 = 3251678051U;
int zero = 0;
unsigned char var_11 = (unsigned char)119;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-5989;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
