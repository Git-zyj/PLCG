#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2053311979U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)29151;
signed char var_6 = (signed char)6;
unsigned short var_7 = (unsigned short)40162;
int zero = 0;
int var_10 = -1103557032;
unsigned short var_11 = (unsigned short)14491;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
