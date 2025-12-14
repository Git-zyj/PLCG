#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)10185;
unsigned char var_5 = (unsigned char)91;
int var_7 = 1914557536;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)52;
long long int var_12 = -6777751811506343573LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
