#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
_Bool var_4 = (_Bool)0;
long long int var_7 = -8689276563097053196LL;
short var_9 = (short)-23712;
unsigned short var_10 = (unsigned short)22576;
unsigned char var_11 = (unsigned char)8;
unsigned long long int var_12 = 10498325193149945171ULL;
short var_14 = (short)-5610;
int zero = 0;
short var_15 = (short)20730;
unsigned int var_16 = 1963305860U;
unsigned int var_17 = 2211056613U;
short var_18 = (short)-13511;
unsigned char var_19 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
