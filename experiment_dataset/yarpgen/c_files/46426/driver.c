#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2823137288U;
unsigned short var_5 = (unsigned short)52221;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 7184417007212382455ULL;
int zero = 0;
int var_12 = 2068716419;
unsigned short var_13 = (unsigned short)27442;
short var_14 = (short)-3381;
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
