#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11255;
unsigned int var_5 = 327234987U;
unsigned short var_7 = (unsigned short)64234;
short var_8 = (short)7003;
unsigned short var_10 = (unsigned short)52133;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)0;
int var_16 = -841748273;
unsigned short var_17 = (unsigned short)6816;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
