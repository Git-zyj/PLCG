#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7303;
long long int var_6 = -4449055545398946228LL;
short var_8 = (short)-15841;
int var_11 = -145896564;
unsigned int var_12 = 240648445U;
int zero = 0;
long long int var_13 = 2352938418207285379LL;
unsigned long long int var_14 = 3709516885666410205ULL;
int var_15 = 1475730625;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
