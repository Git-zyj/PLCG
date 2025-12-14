#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)706;
unsigned short var_7 = (unsigned short)35688;
short var_8 = (short)16433;
signed char var_9 = (signed char)-69;
short var_10 = (short)-31348;
int zero = 0;
unsigned short var_11 = (unsigned short)34935;
unsigned short var_12 = (unsigned short)58398;
void init() {
}

void checksum() {
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
