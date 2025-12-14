#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7495;
short var_2 = (short)-10600;
long long int var_3 = 8392829535632618457LL;
long long int var_7 = 7889405918128892420LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15225981973944633474ULL;
int zero = 0;
long long int var_10 = 4857263225066739060LL;
long long int var_11 = 1465553785315708471LL;
unsigned char var_12 = (unsigned char)231;
int var_13 = -33430410;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
