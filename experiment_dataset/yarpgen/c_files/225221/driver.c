#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 8186876303511220463ULL;
short var_4 = (short)-15587;
unsigned short var_5 = (unsigned short)51284;
unsigned short var_8 = (unsigned short)20418;
unsigned char var_12 = (unsigned char)161;
int zero = 0;
short var_16 = (short)-13752;
unsigned long long int var_17 = 11480582863767928465ULL;
int var_18 = -337397685;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
