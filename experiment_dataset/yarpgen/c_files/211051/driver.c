#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 964727590;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)18;
int zero = 0;
unsigned int var_14 = 1411930065U;
unsigned char var_15 = (unsigned char)36;
void init() {
}

void checksum() {
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
