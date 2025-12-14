#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6191963345479558760LL;
short var_6 = (short)29231;
unsigned short var_7 = (unsigned short)63861;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)97;
unsigned short var_12 = (unsigned short)33412;
unsigned char var_13 = (unsigned char)43;
unsigned long long int var_14 = 1358060957571898795ULL;
int zero = 0;
short var_17 = (short)-7562;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)37460;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
