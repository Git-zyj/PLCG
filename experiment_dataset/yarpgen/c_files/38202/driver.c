#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
short var_1 = (short)-23096;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2034454822U;
unsigned char var_17 = (unsigned char)17;
unsigned int var_18 = 2923748453U;
long long int var_19 = -9183062726837995926LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
