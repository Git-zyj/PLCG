#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)38759;
signed char var_5 = (signed char)-117;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_12 = (short)4518;
int zero = 0;
unsigned long long int var_14 = 2350642069403423513ULL;
unsigned short var_15 = (unsigned short)40390;
unsigned short var_16 = (unsigned short)1034;
unsigned short var_17 = (unsigned short)22814;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
