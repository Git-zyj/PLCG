#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_8 = (unsigned char)65;
unsigned int var_9 = 585557788U;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-23019;
unsigned int var_17 = 2772622232U;
int zero = 0;
unsigned char var_18 = (unsigned char)74;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)149;
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
