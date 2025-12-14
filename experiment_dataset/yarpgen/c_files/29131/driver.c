#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)24190;
unsigned short var_9 = (unsigned short)10686;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 4094969986U;
unsigned short var_14 = (unsigned short)5450;
signed char var_15 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
