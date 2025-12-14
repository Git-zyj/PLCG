#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3327419327904634100LL;
unsigned char var_1 = (unsigned char)250;
unsigned short var_3 = (unsigned short)33454;
unsigned short var_5 = (unsigned short)62498;
_Bool var_6 = (_Bool)0;
int zero = 0;
long long int var_12 = -7768977344085988860LL;
int var_13 = -2006745478;
unsigned char var_14 = (unsigned char)229;
unsigned char var_15 = (unsigned char)193;
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
