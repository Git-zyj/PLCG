#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)24346;
int var_7 = -1170623826;
int var_11 = 850027369;
short var_13 = (short)17295;
int zero = 0;
unsigned int var_18 = 1239089115U;
unsigned short var_19 = (unsigned short)18544;
unsigned char var_20 = (unsigned char)214;
void init() {
}

void checksum() {
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
