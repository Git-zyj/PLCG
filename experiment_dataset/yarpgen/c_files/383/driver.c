#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56807;
signed char var_2 = (signed char)76;
unsigned short var_6 = (unsigned short)47802;
_Bool var_8 = (_Bool)0;
int var_10 = -1005784758;
unsigned short var_11 = (unsigned short)622;
long long int var_12 = -981692670659970903LL;
unsigned short var_13 = (unsigned short)46541;
int zero = 0;
short var_16 = (short)-27863;
int var_17 = 439994303;
void init() {
}

void checksum() {
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
