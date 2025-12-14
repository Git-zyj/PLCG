#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 1536540774273762702ULL;
unsigned int var_11 = 3932097413U;
int var_12 = -699321128;
int zero = 0;
int var_13 = 715526197;
unsigned char var_14 = (unsigned char)109;
unsigned short var_15 = (unsigned short)64654;
short var_16 = (short)30564;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
