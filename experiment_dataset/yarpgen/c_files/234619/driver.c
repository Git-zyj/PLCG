#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
int var_3 = -1123455260;
signed char var_5 = (signed char)55;
long long int var_6 = -8888817847357766033LL;
unsigned int var_7 = 3730351185U;
short var_10 = (short)-11546;
int zero = 0;
unsigned int var_11 = 2357464582U;
short var_12 = (short)1205;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
