#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)5171;
unsigned short var_8 = (unsigned short)46293;
unsigned short var_12 = (unsigned short)6455;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_17 = -1479218702;
_Bool var_18 = (_Bool)1;
short var_19 = (short)21377;
signed char var_20 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
