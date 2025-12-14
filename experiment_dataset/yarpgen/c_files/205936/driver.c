#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11492038780223013608ULL;
int var_2 = -559381644;
long long int var_4 = -3060531772106685214LL;
unsigned int var_6 = 641434721U;
unsigned long long int var_8 = 6395142773841025286ULL;
unsigned int var_10 = 1962195743U;
long long int var_11 = -2265077526813177557LL;
unsigned int var_12 = 1166178625U;
int zero = 0;
long long int var_13 = 3742351825990275060LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)53111;
unsigned short var_16 = (unsigned short)45440;
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
