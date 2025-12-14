#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12927563789416266540ULL;
long long int var_3 = 1490082632024984537LL;
unsigned char var_8 = (unsigned char)54;
signed char var_9 = (signed char)-2;
unsigned long long int var_11 = 2676756649409715522ULL;
unsigned char var_12 = (unsigned char)139;
long long int var_13 = 2159745978264485121LL;
int zero = 0;
long long int var_14 = -2771152129763999626LL;
unsigned long long int var_15 = 3945798636358170797ULL;
short var_16 = (short)-12116;
signed char var_17 = (signed char)-124;
unsigned char var_18 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
