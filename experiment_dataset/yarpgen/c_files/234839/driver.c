#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
long long int var_2 = -910039312455610067LL;
short var_4 = (short)7859;
long long int var_8 = -5074869586892496207LL;
int zero = 0;
unsigned short var_12 = (unsigned short)51022;
short var_13 = (short)-32303;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2945041917U;
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
