#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)15757;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2605507238U;
unsigned int var_9 = 997422587U;
unsigned long long int var_13 = 16396078561090556057ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)41508;
unsigned long long int var_16 = 6514474011870670420ULL;
void init() {
}

void checksum() {
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
