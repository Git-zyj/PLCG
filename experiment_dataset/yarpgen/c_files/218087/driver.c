#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2003878951U;
int var_5 = -1623281787;
long long int var_9 = -7579151185617110809LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 12407205889549512004ULL;
int var_18 = 291457653;
unsigned short var_19 = (unsigned short)33053;
long long int var_20 = 7079181211297333832LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
