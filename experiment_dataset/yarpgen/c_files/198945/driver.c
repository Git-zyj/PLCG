#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1602716461;
_Bool var_3 = (_Bool)1;
unsigned int var_10 = 1269290380U;
short var_13 = (short)4778;
int zero = 0;
unsigned short var_14 = (unsigned short)53842;
short var_15 = (short)-32286;
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
