#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6596310451981044401LL;
unsigned char var_1 = (unsigned char)140;
unsigned long long int var_9 = 9979643991799664072ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)28197;
int zero = 0;
unsigned int var_20 = 516737948U;
signed char var_21 = (signed char)47;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
