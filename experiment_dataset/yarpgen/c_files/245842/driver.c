#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)171;
short var_15 = (short)16922;
unsigned char var_16 = (unsigned char)118;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1877029688U;
int zero = 0;
long long int var_20 = -1964680881548575667LL;
signed char var_21 = (signed char)-29;
unsigned char var_22 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
