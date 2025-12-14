#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34078;
short var_3 = (short)-22983;
short var_6 = (short)-31032;
int var_7 = -1654090937;
_Bool var_8 = (_Bool)0;
short var_11 = (short)11404;
unsigned int var_12 = 3481628363U;
int zero = 0;
unsigned int var_15 = 4162605548U;
unsigned int var_16 = 1144691768U;
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
