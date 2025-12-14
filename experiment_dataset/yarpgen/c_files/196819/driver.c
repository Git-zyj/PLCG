#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10989;
unsigned short var_3 = (unsigned short)12637;
signed char var_8 = (signed char)32;
unsigned short var_10 = (unsigned short)30955;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-13123;
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
