#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31422;
unsigned int var_2 = 467264735U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 9021823588207141154ULL;
short var_11 = (short)30971;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)19924;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
