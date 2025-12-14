#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 141439141U;
unsigned long long int var_3 = 17911054960537771099ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)12;
int var_13 = -972945707;
int zero = 0;
int var_14 = 1707869696;
signed char var_15 = (signed char)-25;
unsigned short var_16 = (unsigned short)17901;
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
