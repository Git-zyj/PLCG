#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)18213;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)215;
_Bool var_10 = (_Bool)1;
short var_14 = (short)-8772;
int zero = 0;
signed char var_15 = (signed char)-74;
short var_16 = (short)-18671;
signed char var_17 = (signed char)15;
signed char var_18 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
