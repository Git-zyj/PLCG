#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29920;
unsigned short var_6 = (unsigned short)43783;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 447406784U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2880173320U;
short var_13 = (short)-26645;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
