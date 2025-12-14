#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)23359;
long long int var_7 = -3123665677878056837LL;
unsigned int var_8 = 2132669256U;
long long int var_9 = 6354537431062007861LL;
int zero = 0;
long long int var_10 = -3843945843785556920LL;
int var_11 = -1815682839;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
