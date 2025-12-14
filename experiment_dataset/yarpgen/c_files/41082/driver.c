#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)223;
unsigned char var_4 = (unsigned char)14;
unsigned short var_6 = (unsigned short)6743;
unsigned int var_7 = 2627841259U;
unsigned int var_8 = 161983365U;
int var_9 = 1813164348;
signed char var_13 = (signed char)85;
int zero = 0;
unsigned long long int var_14 = 13492055535329596610ULL;
unsigned int var_15 = 4186017409U;
short var_16 = (short)13543;
void init() {
}

void checksum() {
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
