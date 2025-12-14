#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30638;
unsigned int var_3 = 3284936427U;
signed char var_5 = (signed char)90;
unsigned char var_6 = (unsigned char)196;
unsigned char var_7 = (unsigned char)218;
unsigned int var_13 = 2021577421U;
unsigned long long int var_15 = 8328026557841041269ULL;
unsigned long long int var_16 = 4752373412550095409ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)7;
unsigned char var_19 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
