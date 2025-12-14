#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8534;
unsigned short var_3 = (unsigned short)44494;
signed char var_4 = (signed char)-124;
unsigned short var_5 = (unsigned short)43113;
unsigned int var_6 = 578237702U;
unsigned long long int var_7 = 12965778760858967426ULL;
unsigned int var_9 = 2863651304U;
unsigned short var_10 = (unsigned short)53092;
signed char var_11 = (signed char)103;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)147;
long long int var_15 = -7261472273606507862LL;
unsigned char var_16 = (unsigned char)24;
unsigned short var_17 = (unsigned short)35964;
void init() {
}

void checksum() {
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
