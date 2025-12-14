#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)9276;
unsigned char var_7 = (unsigned char)132;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16946391031259352725ULL;
unsigned char var_12 = (unsigned char)47;
unsigned long long int var_13 = 7678831661318183897ULL;
int var_14 = -1983220718;
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
