#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3658338947U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1935827363U;
unsigned short var_7 = (unsigned short)39222;
int var_11 = -2017271341;
long long int var_12 = 2960462628530020324LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2752951513U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3736126975U;
unsigned char var_19 = (unsigned char)252;
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
