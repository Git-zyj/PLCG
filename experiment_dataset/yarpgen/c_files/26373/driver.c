#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-6438;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-32359;
short var_10 = (short)16687;
unsigned short var_15 = (unsigned short)59205;
unsigned int var_19 = 1487594085U;
int zero = 0;
unsigned int var_20 = 796487371U;
signed char var_21 = (signed char)36;
unsigned int var_22 = 3637663626U;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 17040418025189033278ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
