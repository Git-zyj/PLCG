#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -31200749;
unsigned short var_6 = (unsigned short)7265;
int var_7 = -1944145594;
signed char var_8 = (signed char)88;
int zero = 0;
unsigned int var_13 = 453012263U;
int var_14 = 702045319;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)32594;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
