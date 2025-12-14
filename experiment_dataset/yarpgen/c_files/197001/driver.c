#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8961;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)101;
unsigned int var_7 = 927107858U;
short var_17 = (short)6402;
short var_18 = (short)14329;
int zero = 0;
unsigned int var_20 = 51982794U;
unsigned int var_21 = 235102787U;
_Bool var_22 = (_Bool)0;
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
