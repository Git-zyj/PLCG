#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1421007862;
unsigned int var_8 = 2810653019U;
_Bool var_11 = (_Bool)1;
short var_16 = (short)-5666;
int zero = 0;
unsigned short var_17 = (unsigned short)59567;
unsigned int var_18 = 2112241024U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
