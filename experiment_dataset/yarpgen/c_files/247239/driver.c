#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
unsigned int var_1 = 3561479324U;
unsigned char var_2 = (unsigned char)30;
short var_5 = (short)22764;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
unsigned int var_12 = 1016119496U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)35276;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
