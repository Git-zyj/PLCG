#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 845580759U;
unsigned char var_2 = (unsigned char)134;
signed char var_3 = (signed char)-55;
unsigned int var_4 = 2202319590U;
short var_8 = (short)23023;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)44;
long long int var_13 = -2136531573766747728LL;
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
