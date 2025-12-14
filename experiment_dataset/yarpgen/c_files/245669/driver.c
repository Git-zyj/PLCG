#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-127;
signed char var_8 = (signed char)-46;
short var_10 = (short)15090;
short var_12 = (short)-22772;
short var_13 = (short)-9534;
int zero = 0;
unsigned char var_15 = (unsigned char)54;
signed char var_16 = (signed char)-107;
short var_17 = (short)23067;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
