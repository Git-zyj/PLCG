#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11394;
unsigned short var_6 = (unsigned short)16092;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -1130715874;
unsigned char var_19 = (unsigned char)211;
unsigned int var_20 = 2397582594U;
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
