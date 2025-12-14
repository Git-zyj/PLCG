#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2027959457U;
short var_3 = (short)19755;
int var_6 = -1129168730;
short var_7 = (short)4525;
unsigned short var_8 = (unsigned short)26577;
unsigned int var_11 = 685110062U;
short var_13 = (short)6338;
unsigned int var_14 = 2373322321U;
int zero = 0;
short var_16 = (short)-21554;
unsigned int var_17 = 3688489982U;
void init() {
}

void checksum() {
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
