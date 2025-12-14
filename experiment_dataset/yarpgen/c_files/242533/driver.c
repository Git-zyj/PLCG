#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1382;
short var_3 = (short)14212;
int var_5 = -1408993788;
unsigned int var_10 = 1991246865U;
long long int var_14 = -3921147424377397901LL;
int zero = 0;
short var_19 = (short)16955;
signed char var_20 = (signed char)57;
short var_21 = (short)21369;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
