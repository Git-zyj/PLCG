#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = -2471812883285818522LL;
unsigned int var_4 = 4017101005U;
short var_7 = (short)-16744;
unsigned short var_8 = (unsigned short)39400;
int var_9 = 2062750912;
int zero = 0;
unsigned long long int var_10 = 3855828208662062718ULL;
unsigned char var_11 = (unsigned char)193;
short var_12 = (short)-26811;
unsigned int var_13 = 3792058973U;
unsigned int var_14 = 3916378521U;
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
