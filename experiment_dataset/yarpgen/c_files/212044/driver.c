#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1439327161U;
unsigned short var_2 = (unsigned short)1956;
unsigned long long int var_6 = 13955811243831256354ULL;
unsigned char var_7 = (unsigned char)43;
int zero = 0;
signed char var_13 = (signed char)30;
long long int var_14 = -8286491735667365052LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2544592198U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
