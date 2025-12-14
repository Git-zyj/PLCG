#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4740515800385917067LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 4465074343531621478ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 1984181197U;
unsigned short var_11 = (unsigned short)521;
unsigned int var_12 = 2223974981U;
unsigned long long int var_13 = 10127438531701163745ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)17641;
short var_19 = (short)-16939;
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
