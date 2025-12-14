#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24180;
unsigned int var_6 = 4278255671U;
long long int var_8 = -3261062783051472525LL;
short var_10 = (short)19994;
long long int var_12 = 186436564551448844LL;
unsigned short var_13 = (unsigned short)34301;
unsigned int var_15 = 2004047065U;
int zero = 0;
unsigned char var_17 = (unsigned char)24;
short var_18 = (short)-29966;
short var_19 = (short)-11058;
short var_20 = (short)-15053;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
