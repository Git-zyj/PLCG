#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-19535;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 11754609649975466644ULL;
long long int var_11 = 1377221644220812688LL;
int zero = 0;
unsigned long long int var_16 = 17181435839711111908ULL;
unsigned long long int var_17 = 11601676465413467802ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
