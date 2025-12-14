#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)170;
unsigned short var_9 = (unsigned short)64921;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)-32115;
_Bool var_16 = (_Bool)1;
short var_17 = (short)4362;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
