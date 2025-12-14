#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)97;
unsigned long long int var_7 = 10922551287535599303ULL;
signed char var_10 = (signed char)30;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)242;
short var_13 = (short)-18242;
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
