#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31419;
unsigned short var_1 = (unsigned short)13833;
unsigned short var_2 = (unsigned short)61074;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1134410506U;
unsigned short var_8 = (unsigned short)958;
short var_11 = (short)11178;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 4664442962401691405ULL;
unsigned short var_17 = (unsigned short)35545;
short var_18 = (short)-9313;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
