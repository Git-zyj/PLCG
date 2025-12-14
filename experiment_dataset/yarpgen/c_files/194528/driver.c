#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-18742;
signed char var_13 = (signed char)49;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-5355;
unsigned short var_22 = (unsigned short)23525;
unsigned int var_23 = 557596911U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
