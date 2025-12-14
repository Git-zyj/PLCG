#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned long long int var_3 = 8011610325664442525ULL;
signed char var_4 = (signed char)96;
long long int var_5 = -5596889751029436525LL;
unsigned short var_8 = (unsigned short)54011;
unsigned long long int var_9 = 7392543623954136811ULL;
unsigned int var_10 = 664145982U;
unsigned short var_11 = (unsigned short)49192;
unsigned char var_12 = (unsigned char)172;
unsigned short var_14 = (unsigned short)43130;
int zero = 0;
unsigned long long int var_15 = 4547308175487137490ULL;
short var_16 = (short)11304;
short var_17 = (short)714;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
