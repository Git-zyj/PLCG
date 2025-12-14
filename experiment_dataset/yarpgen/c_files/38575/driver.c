#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1684476421346257900LL;
long long int var_5 = 2600648530392888005LL;
_Bool var_6 = (_Bool)1;
int var_7 = -172554013;
unsigned char var_8 = (unsigned char)65;
unsigned long long int var_10 = 15732418408416044933ULL;
int zero = 0;
long long int var_12 = 6958001861297990970LL;
short var_13 = (short)7370;
unsigned int var_14 = 2288121376U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
