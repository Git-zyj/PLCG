#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19066;
unsigned int var_4 = 926725120U;
long long int var_6 = -7331782926072333278LL;
unsigned short var_8 = (unsigned short)7371;
int zero = 0;
long long int var_15 = -3269284129339538218LL;
unsigned short var_16 = (unsigned short)55945;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
