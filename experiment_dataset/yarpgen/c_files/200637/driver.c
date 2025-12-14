#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2491950583U;
long long int var_4 = 3210707723059853915LL;
unsigned int var_8 = 68190367U;
int var_9 = 1118237852;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)46;
unsigned char var_20 = (unsigned char)141;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
