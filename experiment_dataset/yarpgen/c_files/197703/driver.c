#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-13675;
short var_2 = (short)29101;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = -377928152;
unsigned long long int var_12 = 866043075784040907ULL;
unsigned int var_13 = 2002458335U;
int zero = 0;
unsigned int var_14 = 3000046479U;
unsigned int var_15 = 2393572899U;
short var_16 = (short)-31074;
void init() {
}

void checksum() {
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
