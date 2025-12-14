#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 705358463U;
unsigned char var_2 = (unsigned char)203;
short var_3 = (short)28615;
unsigned int var_4 = 3236657677U;
unsigned char var_5 = (unsigned char)165;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-84;
long long int var_13 = -5974651155429891848LL;
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
