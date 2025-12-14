#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_7 = 1341959970;
unsigned long long int var_16 = 7803890547781567572ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)226;
signed char var_20 = (signed char)18;
short var_21 = (short)23439;
unsigned char var_22 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
