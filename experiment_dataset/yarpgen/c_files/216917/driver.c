#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -3311878233231385712LL;
signed char var_4 = (signed char)-64;
signed char var_7 = (signed char)99;
_Bool var_8 = (_Bool)1;
signed char var_13 = (signed char)112;
int zero = 0;
signed char var_15 = (signed char)-84;
signed char var_16 = (signed char)7;
void init() {
}

void checksum() {
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
