#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)878;
unsigned short var_4 = (unsigned short)12872;
signed char var_5 = (signed char)35;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)34372;
unsigned short var_13 = (unsigned short)31229;
unsigned long long int var_16 = 4056863838328918714ULL;
short var_17 = (short)-15627;
int zero = 0;
unsigned short var_19 = (unsigned short)12959;
unsigned short var_20 = (unsigned short)429;
void init() {
}

void checksum() {
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
