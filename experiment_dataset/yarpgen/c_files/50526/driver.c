#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12374819294458342096ULL;
unsigned long long int var_1 = 8310239172370732259ULL;
unsigned int var_2 = 572454530U;
unsigned long long int var_3 = 6484136221304349683ULL;
unsigned long long int var_5 = 6591126097155125485ULL;
signed char var_6 = (signed char)-77;
unsigned int var_8 = 3581198880U;
int var_9 = 1700390941;
int zero = 0;
int var_10 = 1362468797;
short var_11 = (short)-3272;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
