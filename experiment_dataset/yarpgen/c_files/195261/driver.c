#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 232728360;
int var_7 = 1923228682;
short var_8 = (short)-15110;
unsigned long long int var_10 = 10592164094795015417ULL;
int var_12 = -344741929;
int zero = 0;
unsigned long long int var_14 = 13322066894626871455ULL;
unsigned long long int var_15 = 10216197276487784072ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)31304;
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
