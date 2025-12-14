#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1122306410467432178ULL;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = -843193076;
unsigned long long int var_14 = 13086302548895366909ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2625966536U;
unsigned int var_17 = 2405825654U;
unsigned short var_18 = (unsigned short)15102;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
