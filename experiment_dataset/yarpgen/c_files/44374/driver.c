#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)30;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2158530035U;
int var_11 = 156953223;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 10098353306512276885ULL;
unsigned short var_16 = (unsigned short)924;
unsigned short var_17 = (unsigned short)20511;
int var_18 = -941685031;
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
