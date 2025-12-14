#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)18401;
short var_4 = (short)-7032;
short var_8 = (short)15690;
signed char var_9 = (signed char)58;
unsigned int var_11 = 2474509320U;
int zero = 0;
unsigned char var_12 = (unsigned char)161;
signed char var_13 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
