#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-6977;
int var_3 = -1576929053;
long long int var_4 = 9015933933089096521LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 811113847U;
short var_8 = (short)-16372;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)18559;
signed char var_11 = (signed char)(-127 - 1);
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
