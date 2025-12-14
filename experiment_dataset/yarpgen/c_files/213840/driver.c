#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 174614259;
int var_7 = 1826109626;
unsigned char var_8 = (unsigned char)99;
unsigned char var_12 = (unsigned char)16;
unsigned int var_15 = 1119679303U;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-4652;
int zero = 0;
unsigned long long int var_19 = 2913338406638056235ULL;
short var_20 = (short)-12017;
int var_21 = 1269139455;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
