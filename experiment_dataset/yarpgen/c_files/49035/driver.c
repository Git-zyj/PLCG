#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7083187034723018818LL;
_Bool var_2 = (_Bool)1;
unsigned int var_6 = 878399114U;
unsigned short var_7 = (unsigned short)19472;
long long int var_8 = 8446903036841804128LL;
long long int var_13 = 1184022896721549430LL;
int zero = 0;
unsigned long long int var_15 = 7409652245648527354ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)56874;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1960330299U;
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
