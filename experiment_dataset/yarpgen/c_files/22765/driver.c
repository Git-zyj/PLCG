#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9186;
short var_2 = (short)26700;
_Bool var_3 = (_Bool)0;
long long int var_6 = 7067751698161192958LL;
signed char var_7 = (signed char)-52;
short var_11 = (short)-16023;
int zero = 0;
long long int var_12 = -6003724399935649576LL;
signed char var_13 = (signed char)-51;
unsigned int var_14 = 3672609286U;
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
