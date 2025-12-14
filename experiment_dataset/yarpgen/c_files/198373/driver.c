#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)44811;
int var_4 = 984997504;
unsigned int var_8 = 79137326U;
signed char var_10 = (signed char)11;
unsigned long long int var_11 = 14542679998732890989ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)26564;
short var_13 = (short)-8860;
short var_14 = (short)-10849;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
