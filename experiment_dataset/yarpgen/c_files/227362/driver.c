#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14375365701682579315ULL;
unsigned char var_2 = (unsigned char)243;
signed char var_6 = (signed char)101;
_Bool var_10 = (_Bool)0;
int var_11 = -2013114814;
signed char var_12 = (signed char)-26;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)12604;
unsigned char var_18 = (unsigned char)216;
short var_19 = (short)-17383;
short var_20 = (short)-9405;
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
