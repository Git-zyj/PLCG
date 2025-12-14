#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10815;
long long int var_2 = 655740936369546908LL;
int var_5 = -752802347;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)15;
unsigned char var_11 = (unsigned char)48;
long long int var_12 = 1195776454266035295LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
