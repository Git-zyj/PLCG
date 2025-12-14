#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)61121;
int var_7 = 1718106993;
_Bool var_10 = (_Bool)0;
int var_11 = 1886705433;
unsigned int var_14 = 121394726U;
unsigned short var_15 = (unsigned short)4155;
int zero = 0;
short var_17 = (short)4661;
unsigned int var_18 = 1038453787U;
unsigned int var_19 = 2609364650U;
unsigned int var_20 = 2886835199U;
unsigned int var_21 = 4263447837U;
void init() {
}

void checksum() {
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
