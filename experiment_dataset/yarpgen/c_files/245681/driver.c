#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)97;
long long int var_5 = -2433235927603108980LL;
unsigned short var_6 = (unsigned short)44434;
unsigned int var_7 = 2023126549U;
unsigned short var_8 = (unsigned short)27021;
short var_9 = (short)7830;
int zero = 0;
unsigned char var_10 = (unsigned char)134;
unsigned int var_11 = 2432536306U;
unsigned int var_12 = 3466916801U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
