#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)49869;
short var_5 = (short)30671;
unsigned short var_6 = (unsigned short)8552;
unsigned long long int var_11 = 1156850959241331889ULL;
int zero = 0;
unsigned int var_12 = 2561275479U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)19722;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
