#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_11 = 10293916369997834438ULL;
unsigned long long int var_15 = 17470045799381794276ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)55797;
unsigned long long int var_21 = 8004833999104775483ULL;
void init() {
}

void checksum() {
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
