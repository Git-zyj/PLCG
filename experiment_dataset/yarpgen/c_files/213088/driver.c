#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-28228;
short var_9 = (short)-12539;
unsigned int var_10 = 4058252121U;
int var_14 = -1843548978;
int zero = 0;
signed char var_16 = (signed char)-97;
unsigned short var_17 = (unsigned short)62207;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
