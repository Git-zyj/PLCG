#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3761;
long long int var_1 = -1791015553855454096LL;
_Bool var_2 = (_Bool)1;
int var_4 = 91440043;
long long int var_7 = 7689203910654379097LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = 28017957;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
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
