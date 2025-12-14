#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-23605;
unsigned int var_4 = 1034004328U;
unsigned char var_5 = (unsigned char)23;
unsigned short var_12 = (unsigned short)51931;
long long int var_13 = 5434483565257979369LL;
int zero = 0;
unsigned int var_17 = 1562292399U;
unsigned long long int var_18 = 5223530873736489538ULL;
long long int var_19 = -3495089399979991983LL;
void init() {
}

void checksum() {
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
