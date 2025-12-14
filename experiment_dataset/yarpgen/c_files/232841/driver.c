#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2841238989U;
long long int var_3 = -5092283483369102660LL;
unsigned int var_4 = 3377156927U;
unsigned char var_6 = (unsigned char)159;
int var_7 = -1640434107;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)207;
signed char var_12 = (signed char)52;
long long int var_17 = 7622896154611665228LL;
int zero = 0;
unsigned int var_18 = 2628737039U;
short var_19 = (short)-22429;
unsigned int var_20 = 2791760209U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
