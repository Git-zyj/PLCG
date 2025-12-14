#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 5350272632307634191ULL;
short var_6 = (short)-13606;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_11 = (short)-2515;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)71;
void init() {
}

void checksum() {
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
