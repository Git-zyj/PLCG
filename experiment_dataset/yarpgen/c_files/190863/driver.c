#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10147683115284669786ULL;
unsigned long long int var_3 = 10935853859730451642ULL;
long long int var_5 = -528172749732245306LL;
unsigned int var_6 = 2617972167U;
unsigned short var_7 = (unsigned short)62860;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -7946919059931537908LL;
unsigned short var_14 = (unsigned short)26492;
unsigned short var_15 = (unsigned short)15744;
unsigned char var_16 = (unsigned char)88;
unsigned int var_17 = 4274594291U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
