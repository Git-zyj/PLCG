#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16427;
unsigned int var_3 = 2525757997U;
unsigned char var_5 = (unsigned char)105;
unsigned long long int var_6 = 15694456581931454144ULL;
signed char var_13 = (signed char)-12;
int zero = 0;
long long int var_20 = -7273543770435645698LL;
unsigned int var_21 = 1434994030U;
_Bool var_22 = (_Bool)1;
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
