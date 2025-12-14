#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)31;
unsigned char var_8 = (unsigned char)12;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3636576195761029061LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
