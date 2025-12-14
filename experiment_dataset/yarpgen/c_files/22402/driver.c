#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3618072087U;
unsigned int var_2 = 220226212U;
unsigned short var_4 = (unsigned short)10836;
int var_5 = -1408548388;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)40905;
unsigned long long int var_11 = 6975309376009798798ULL;
long long int var_13 = 743482532784496280LL;
int var_14 = 801396277;
short var_15 = (short)30855;
int zero = 0;
unsigned short var_16 = (unsigned short)4360;
unsigned short var_17 = (unsigned short)31466;
signed char var_18 = (signed char)76;
unsigned int var_19 = 2313890760U;
signed char var_20 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
