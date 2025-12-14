#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_5 = (short)16079;
signed char var_7 = (signed char)-6;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)95;
unsigned char var_12 = (unsigned char)249;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1791044583203882902ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)24;
unsigned short var_20 = (unsigned short)64520;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
