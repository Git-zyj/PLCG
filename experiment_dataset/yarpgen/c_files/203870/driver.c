#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1431911186U;
unsigned short var_4 = (unsigned short)62521;
unsigned int var_5 = 2007517603U;
unsigned short var_8 = (unsigned short)1740;
unsigned long long int var_11 = 7836535533857933749ULL;
int zero = 0;
unsigned int var_13 = 3392101987U;
signed char var_14 = (signed char)6;
void init() {
}

void checksum() {
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
