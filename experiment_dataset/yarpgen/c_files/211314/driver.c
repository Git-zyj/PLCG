#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2949631904U;
_Bool var_1 = (_Bool)0;
long long int var_3 = -1596020060387653404LL;
_Bool var_4 = (_Bool)1;
int var_5 = 628778661;
unsigned long long int var_6 = 8276998573500413799ULL;
_Bool var_7 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)254;
int var_17 = -511132784;
int zero = 0;
unsigned long long int var_18 = 10408495377563093398ULL;
unsigned char var_19 = (unsigned char)28;
unsigned char var_20 = (unsigned char)108;
long long int var_21 = 381474619324528125LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
