#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18575;
unsigned short var_3 = (unsigned short)42758;
short var_6 = (short)-28752;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)58337;
unsigned int var_21 = 2546228701U;
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
