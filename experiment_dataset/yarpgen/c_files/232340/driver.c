#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
unsigned long long int var_2 = 8880267627001700566ULL;
unsigned long long int var_3 = 17185259732378220995ULL;
short var_5 = (short)-24176;
unsigned long long int var_8 = 17043133387989950520ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 2079271127U;
int zero = 0;
unsigned char var_15 = (unsigned char)254;
signed char var_16 = (signed char)57;
short var_17 = (short)-18405;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
