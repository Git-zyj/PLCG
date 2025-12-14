#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18819;
unsigned short var_2 = (unsigned short)42628;
unsigned short var_3 = (unsigned short)24248;
int var_9 = -1323052919;
unsigned long long int var_10 = 9807137949705344342ULL;
unsigned int var_15 = 3546316608U;
long long int var_18 = -2481914441093267899LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -818552288230216898LL;
unsigned short var_22 = (unsigned short)57788;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
