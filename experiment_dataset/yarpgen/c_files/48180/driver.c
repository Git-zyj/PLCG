#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)210;
short var_4 = (short)9937;
short var_6 = (short)-22562;
short var_7 = (short)-12356;
short var_12 = (short)1075;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)26;
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
