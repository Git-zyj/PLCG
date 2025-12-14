#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 16680486060065527513ULL;
unsigned long long int var_5 = 10991270722673908383ULL;
long long int var_9 = -3925737678808295898LL;
short var_10 = (short)-8597;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 10083410450900466427ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 500377055;
unsigned short var_16 = (unsigned short)28529;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
