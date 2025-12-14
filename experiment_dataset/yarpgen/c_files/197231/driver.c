#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 61010813;
unsigned long long int var_1 = 14667367889813204734ULL;
short var_3 = (short)23781;
unsigned char var_4 = (unsigned char)161;
unsigned long long int var_5 = 14194771568002861185ULL;
unsigned int var_7 = 361441228U;
unsigned long long int var_8 = 15731330486217236862ULL;
int var_9 = -1356361852;
unsigned int var_10 = 1491822007U;
int zero = 0;
short var_11 = (short)-7024;
unsigned short var_12 = (unsigned short)54703;
unsigned int var_13 = 2202754564U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
