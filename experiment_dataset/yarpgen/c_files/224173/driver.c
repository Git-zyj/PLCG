#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_6 = -729726954;
short var_8 = (short)2017;
unsigned int var_9 = 2089897292U;
signed char var_10 = (signed char)10;
unsigned short var_14 = (unsigned short)16090;
int zero = 0;
short var_20 = (short)32167;
int var_21 = 1899669855;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
