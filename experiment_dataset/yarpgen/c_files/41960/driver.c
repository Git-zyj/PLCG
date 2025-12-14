#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50759;
unsigned short var_3 = (unsigned short)53946;
short var_4 = (short)3030;
unsigned int var_8 = 3662048241U;
_Bool var_10 = (_Bool)1;
short var_16 = (short)31257;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1730628342U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
