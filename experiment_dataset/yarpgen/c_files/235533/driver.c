#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51962;
unsigned char var_5 = (unsigned char)144;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 12584589236182752677ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)26370;
int var_13 = 713033226;
unsigned short var_14 = (unsigned short)21482;
unsigned short var_15 = (unsigned short)44642;
unsigned short var_16 = (unsigned short)24803;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
