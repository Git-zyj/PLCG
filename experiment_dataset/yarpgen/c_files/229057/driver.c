#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)10144;
unsigned int var_2 = 581773514U;
unsigned short var_6 = (unsigned short)15865;
unsigned short var_7 = (unsigned short)8695;
long long int var_8 = -2947741448332526139LL;
unsigned short var_9 = (unsigned short)4182;
int zero = 0;
unsigned int var_11 = 2172678870U;
signed char var_12 = (signed char)1;
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
