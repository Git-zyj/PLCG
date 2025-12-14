#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3988417605U;
signed char var_3 = (signed char)91;
unsigned int var_4 = 528768899U;
short var_5 = (short)-14321;
signed char var_6 = (signed char)27;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
