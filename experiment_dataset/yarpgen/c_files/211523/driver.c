#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 16065076811224424602ULL;
signed char var_2 = (signed char)13;
unsigned short var_3 = (unsigned short)37440;
unsigned long long int var_8 = 5631161292538437148ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)12216;
unsigned long long int var_11 = 15637852552619097541ULL;
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
