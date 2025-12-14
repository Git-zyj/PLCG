#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)40;
signed char var_13 = (signed char)40;
_Bool var_14 = (_Bool)1;
short var_17 = (short)13958;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)200;
void init() {
}

void checksum() {
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
