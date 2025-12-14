#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3625404736U;
unsigned int var_4 = 783379928U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 2128453916132940122ULL;
unsigned int var_14 = 3504123168U;
int zero = 0;
unsigned char var_16 = (unsigned char)26;
unsigned char var_17 = (unsigned char)88;
unsigned char var_18 = (unsigned char)139;
int var_19 = -1968218736;
void init() {
}

void checksum() {
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
