#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28927;
signed char var_4 = (signed char)127;
unsigned int var_5 = 91350573U;
unsigned short var_8 = (unsigned short)24709;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-118;
unsigned short var_13 = (unsigned short)57060;
unsigned short var_14 = (unsigned short)54822;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
