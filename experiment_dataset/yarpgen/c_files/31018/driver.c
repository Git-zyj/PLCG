#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -855817248;
unsigned short var_6 = (unsigned short)2323;
unsigned short var_7 = (unsigned short)49453;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 4223975679U;
long long int var_15 = 7368606187530579271LL;
int zero = 0;
unsigned char var_16 = (unsigned char)126;
signed char var_17 = (signed char)18;
unsigned int var_18 = 3380817540U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
