#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23249;
signed char var_3 = (signed char)59;
unsigned long long int var_4 = 17293845603163222665ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)49;
unsigned char var_11 = (unsigned char)205;
int zero = 0;
unsigned int var_13 = 1667591181U;
short var_14 = (short)-807;
long long int var_15 = -8903281496532597387LL;
unsigned char var_16 = (unsigned char)65;
void init() {
}

void checksum() {
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
