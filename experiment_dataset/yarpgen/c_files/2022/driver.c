#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1608543439U;
unsigned char var_6 = (unsigned char)29;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)81;
short var_11 = (short)4327;
signed char var_12 = (signed char)97;
long long int var_13 = 4585633894644234210LL;
int zero = 0;
int var_15 = 425463550;
unsigned int var_16 = 3425074439U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
