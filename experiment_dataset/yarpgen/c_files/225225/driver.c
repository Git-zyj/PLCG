#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)39774;
unsigned long long int var_9 = 13325194010059260959ULL;
unsigned int var_10 = 3484751826U;
int var_12 = 1710640899;
int zero = 0;
unsigned short var_18 = (unsigned short)35512;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
