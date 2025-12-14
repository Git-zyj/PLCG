#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16988;
unsigned char var_2 = (unsigned char)145;
unsigned char var_3 = (unsigned char)95;
int var_5 = -310696909;
short var_7 = (short)19769;
signed char var_8 = (signed char)-23;
int zero = 0;
int var_11 = -1433913921;
unsigned char var_12 = (unsigned char)51;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
