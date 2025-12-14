#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11469;
unsigned char var_6 = (unsigned char)78;
unsigned int var_11 = 2046143439U;
unsigned char var_13 = (unsigned char)214;
int zero = 0;
int var_14 = 24366140;
short var_15 = (short)-31433;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-26481;
void init() {
}

void checksum() {
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
