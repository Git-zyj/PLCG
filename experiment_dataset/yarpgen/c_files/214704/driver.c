#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)171;
short var_13 = (short)4810;
int zero = 0;
unsigned int var_14 = 4209900281U;
long long int var_15 = -102709240066646437LL;
long long int var_16 = -2094254117994202192LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
