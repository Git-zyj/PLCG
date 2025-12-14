#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_4 = 991103845;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-19;
int zero = 0;
signed char var_10 = (signed char)43;
int var_11 = -197640095;
short var_12 = (short)-19066;
short var_13 = (short)-32748;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
