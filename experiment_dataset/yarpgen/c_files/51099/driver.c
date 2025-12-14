#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1419801241;
_Bool var_3 = (_Bool)0;
long long int var_4 = -246761744880559537LL;
unsigned short var_5 = (unsigned short)29627;
unsigned short var_7 = (unsigned short)48933;
unsigned int var_8 = 2091355524U;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)57309;
int var_12 = 1880906602;
unsigned long long int var_13 = 11023116203155527879ULL;
unsigned int var_14 = 2635808356U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
