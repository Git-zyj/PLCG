#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
signed char var_4 = (signed char)-73;
long long int var_5 = 8213632031659662431LL;
unsigned int var_10 = 222540842U;
unsigned char var_14 = (unsigned char)45;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-27671;
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
