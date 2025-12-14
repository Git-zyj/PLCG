#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)110;
short var_2 = (short)-2009;
signed char var_6 = (signed char)-58;
short var_8 = (short)-13921;
int zero = 0;
unsigned int var_10 = 2245436405U;
unsigned short var_11 = (unsigned short)34450;
unsigned char var_12 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
