#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19070;
int var_3 = -1600360731;
int var_4 = -841052185;
unsigned char var_6 = (unsigned char)163;
long long int var_7 = 6673081644116771794LL;
unsigned char var_8 = (unsigned char)189;
unsigned int var_11 = 1397167017U;
int var_13 = -839611605;
short var_14 = (short)-13648;
int zero = 0;
short var_15 = (short)-29029;
int var_16 = 1627326910;
unsigned char var_17 = (unsigned char)249;
short var_18 = (short)29114;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
