#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_8 = (short)17412;
unsigned int var_12 = 2352243426U;
unsigned long long int var_14 = 14680921922831073029ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)252;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
