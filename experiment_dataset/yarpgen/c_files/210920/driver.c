#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1790105946U;
short var_3 = (short)-6902;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)190;
unsigned int var_10 = 1273261807U;
int zero = 0;
unsigned char var_13 = (unsigned char)158;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)42;
int var_16 = -1497843737;
short var_17 = (short)7373;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
