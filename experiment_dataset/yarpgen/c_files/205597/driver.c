#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11192;
short var_11 = (short)26651;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)165;
int zero = 0;
int var_14 = 1555516683;
short var_15 = (short)21967;
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
