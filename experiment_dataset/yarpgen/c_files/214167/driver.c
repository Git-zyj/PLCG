#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1855069158;
unsigned short var_2 = (unsigned short)57084;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)38617;
long long int var_11 = 7747620694344651976LL;
unsigned long long int var_12 = 1079232751991918020ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 6098009152078706631LL;
long long int var_20 = 6056837485860660869LL;
_Bool var_21 = (_Bool)1;
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
