#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)23934;
_Bool var_6 = (_Bool)1;
unsigned long long int var_11 = 15895183119378863961ULL;
unsigned char var_13 = (unsigned char)171;
short var_14 = (short)-31753;
unsigned int var_16 = 814953833U;
int zero = 0;
unsigned char var_18 = (unsigned char)79;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)32596;
void init() {
}

void checksum() {
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
