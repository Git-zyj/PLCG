#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1669652562;
unsigned char var_4 = (unsigned char)240;
unsigned int var_6 = 2496140224U;
short var_14 = (short)13205;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-86;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
