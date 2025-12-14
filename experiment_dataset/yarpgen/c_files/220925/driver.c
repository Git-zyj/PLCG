#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29828;
short var_4 = (short)-10742;
signed char var_6 = (signed char)-50;
unsigned short var_8 = (unsigned short)54383;
unsigned int var_10 = 2357661748U;
int zero = 0;
signed char var_20 = (signed char)-101;
long long int var_21 = 5950770215332631548LL;
short var_22 = (short)-13912;
unsigned int var_23 = 4095875616U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
