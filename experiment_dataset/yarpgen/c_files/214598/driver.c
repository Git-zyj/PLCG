#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)153;
unsigned int var_5 = 3719427634U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)30742;
short var_8 = (short)-17436;
unsigned int var_9 = 3940279773U;
int zero = 0;
unsigned int var_13 = 2652845465U;
long long int var_14 = 1531295692549532612LL;
void init() {
}

void checksum() {
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
