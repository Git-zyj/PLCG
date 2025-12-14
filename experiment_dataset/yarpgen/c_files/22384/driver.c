#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1821525589U;
signed char var_1 = (signed char)-123;
unsigned int var_6 = 1549576098U;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-13;
int zero = 0;
unsigned short var_12 = (unsigned short)63281;
_Bool var_13 = (_Bool)1;
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
