#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22780;
signed char var_1 = (signed char)106;
unsigned int var_2 = 2239596207U;
unsigned int var_3 = 3723958855U;
unsigned int var_4 = 2007122803U;
short var_5 = (short)7602;
unsigned long long int var_7 = 1948471751432732712ULL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 806737796U;
int zero = 0;
unsigned int var_13 = 2256031395U;
signed char var_14 = (signed char)-88;
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
