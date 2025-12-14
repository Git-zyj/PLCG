#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1811752765;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 12451359494330384466ULL;
unsigned short var_10 = (unsigned short)57994;
short var_11 = (short)-3727;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-28595;
unsigned short var_14 = (unsigned short)33243;
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
