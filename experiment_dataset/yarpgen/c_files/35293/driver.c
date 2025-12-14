#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1401974365U;
unsigned long long int var_8 = 13582156123189077846ULL;
unsigned short var_9 = (unsigned short)14089;
int zero = 0;
unsigned short var_14 = (unsigned short)32134;
unsigned char var_15 = (unsigned char)48;
short var_16 = (short)-32084;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
