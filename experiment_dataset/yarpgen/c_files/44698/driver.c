#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20525;
unsigned long long int var_2 = 7786938878257964976ULL;
unsigned int var_4 = 4148018425U;
unsigned int var_5 = 1857172893U;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_15 = (short)-11682;
int var_16 = -1620659113;
signed char var_17 = (signed char)-41;
unsigned short var_18 = (unsigned short)29703;
_Bool var_19 = (_Bool)1;
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
