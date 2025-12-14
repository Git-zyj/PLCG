#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7512708440316076983LL;
unsigned long long int var_5 = 5754035339974777042ULL;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-9980;
int var_13 = -2117675433;
unsigned long long int var_16 = 15624555547706267284ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4339610536570871001LL;
void init() {
}

void checksum() {
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
