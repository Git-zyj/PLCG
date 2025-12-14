#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4200873291U;
unsigned long long int var_1 = 7965778605292770663ULL;
signed char var_2 = (signed char)107;
signed char var_4 = (signed char)57;
unsigned int var_7 = 3968939455U;
unsigned short var_10 = (unsigned short)43046;
long long int var_11 = 1816987269557826571LL;
long long int var_12 = 2823131879527372304LL;
unsigned int var_14 = 4193838567U;
signed char var_15 = (signed char)-118;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 6864707789840201407LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
