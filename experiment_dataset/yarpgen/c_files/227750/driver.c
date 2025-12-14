#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 147631061U;
long long int var_1 = 5301622350359383216LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-17612;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)4459;
unsigned char var_12 = (unsigned char)93;
int var_13 = -1682568418;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
