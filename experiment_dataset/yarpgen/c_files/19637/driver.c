#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_5 = 2996793445094663998ULL;
unsigned int var_7 = 3641795399U;
long long int var_8 = -1340803499909020886LL;
unsigned short var_13 = (unsigned short)2641;
int zero = 0;
long long int var_19 = 2062258030223432850LL;
long long int var_20 = -6803106512635462715LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
