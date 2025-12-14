#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-9365;
short var_6 = (short)7619;
unsigned char var_7 = (unsigned char)120;
long long int var_9 = 565866241989770843LL;
signed char var_10 = (signed char)-34;
int zero = 0;
unsigned char var_11 = (unsigned char)244;
short var_12 = (short)-30011;
unsigned int var_13 = 3836515224U;
unsigned short var_14 = (unsigned short)18498;
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
