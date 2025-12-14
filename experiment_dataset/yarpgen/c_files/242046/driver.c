#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49553;
_Bool var_2 = (_Bool)0;
long long int var_3 = -5987967980071040249LL;
short var_4 = (short)-25964;
unsigned long long int var_5 = 1635554989141688269ULL;
long long int var_7 = -4407000284102711828LL;
unsigned int var_11 = 2444750088U;
short var_12 = (short)-29301;
int zero = 0;
short var_14 = (short)-16612;
unsigned short var_15 = (unsigned short)41504;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
