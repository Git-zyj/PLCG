#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4207;
unsigned int var_1 = 2497647359U;
unsigned long long int var_5 = 4556896484180756240ULL;
unsigned long long int var_6 = 8271428556889837122ULL;
unsigned int var_7 = 1937800820U;
short var_9 = (short)4280;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)33841;
unsigned long long int var_18 = 16503479161051205989ULL;
unsigned int var_19 = 3203754335U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
