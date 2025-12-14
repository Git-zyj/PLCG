#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_9 = -1919706076;
unsigned char var_12 = (unsigned char)227;
unsigned short var_16 = (unsigned short)36674;
signed char var_19 = (signed char)87;
int zero = 0;
short var_20 = (short)-4833;
short var_21 = (short)-28593;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
