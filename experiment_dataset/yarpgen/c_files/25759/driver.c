#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)104;
short var_11 = (short)-5824;
int zero = 0;
unsigned int var_16 = 3653249793U;
unsigned short var_17 = (unsigned short)18443;
signed char var_18 = (signed char)9;
unsigned short var_19 = (unsigned short)43699;
long long int var_20 = 2406480539520506091LL;
short var_21 = (short)23420;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
