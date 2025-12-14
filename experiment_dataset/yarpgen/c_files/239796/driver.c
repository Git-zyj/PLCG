#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5413718480101961943LL;
unsigned int var_1 = 871517275U;
_Bool var_2 = (_Bool)0;
int var_6 = -904672512;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)189;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1044800295U;
long long int var_14 = -389779792657407676LL;
void init() {
}

void checksum() {
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
