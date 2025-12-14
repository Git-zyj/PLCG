#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)68;
unsigned char var_11 = (unsigned char)6;
unsigned int var_13 = 2633790220U;
int zero = 0;
unsigned int var_18 = 3667101183U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-5069;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
