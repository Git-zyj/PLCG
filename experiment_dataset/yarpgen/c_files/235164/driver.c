#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-1781;
short var_5 = (short)19344;
unsigned char var_8 = (unsigned char)3;
unsigned int var_10 = 2484588898U;
short var_13 = (short)1875;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-49;
short var_19 = (short)-15361;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
