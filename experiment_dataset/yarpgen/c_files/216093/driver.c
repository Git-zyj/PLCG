#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16748;
unsigned int var_2 = 4291983819U;
unsigned short var_3 = (unsigned short)64922;
unsigned short var_6 = (unsigned short)48149;
short var_8 = (short)24657;
unsigned short var_9 = (unsigned short)33129;
unsigned long long int var_12 = 10797040725023131480ULL;
int var_13 = -890105856;
unsigned short var_15 = (unsigned short)55971;
short var_18 = (short)-1823;
int var_19 = 1854863976;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1638802384;
unsigned int var_22 = 2874044278U;
int var_23 = -495986278;
unsigned long long int var_24 = 2918017483735838173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
