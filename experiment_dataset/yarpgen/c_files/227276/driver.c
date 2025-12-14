#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned int var_1 = 1913278318U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)201;
unsigned long long int var_8 = 3256610428873573181ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
short var_13 = (short)24058;
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
