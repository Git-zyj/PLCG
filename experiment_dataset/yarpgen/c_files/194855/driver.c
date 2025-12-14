#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32158;
signed char var_3 = (signed char)91;
long long int var_7 = -3782671828346061512LL;
unsigned int var_8 = 4142170728U;
unsigned char var_14 = (unsigned char)236;
int zero = 0;
short var_20 = (short)-15663;
long long int var_21 = 9034662928273032385LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
