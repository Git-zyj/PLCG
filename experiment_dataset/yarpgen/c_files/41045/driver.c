#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4075;
unsigned short var_3 = (unsigned short)22658;
signed char var_4 = (signed char)72;
short var_5 = (short)7092;
short var_7 = (short)6228;
int zero = 0;
unsigned int var_10 = 3589462017U;
int var_11 = -2113602114;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
