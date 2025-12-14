#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)12450;
_Bool var_9 = (_Bool)1;
signed char var_14 = (signed char)86;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)28779;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)45213;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
