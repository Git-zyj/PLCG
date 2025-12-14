#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)144;
long long int var_10 = 2744928412374213884LL;
short var_11 = (short)-11459;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)251;
int zero = 0;
unsigned short var_16 = (unsigned short)32781;
unsigned short var_17 = (unsigned short)14637;
unsigned short var_18 = (unsigned short)8556;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
