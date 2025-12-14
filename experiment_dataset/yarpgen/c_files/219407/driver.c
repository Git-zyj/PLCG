#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)65;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)85;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)44228;
int zero = 0;
unsigned char var_13 = (unsigned char)141;
unsigned int var_14 = 3315116027U;
void init() {
}

void checksum() {
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
