#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -124705503;
signed char var_3 = (signed char)-122;
long long int var_8 = 3365776836166419142LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-23041;
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
