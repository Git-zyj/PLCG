#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1091653411U;
int var_2 = -992557626;
unsigned int var_7 = 1461603293U;
unsigned short var_10 = (unsigned short)54251;
unsigned int var_12 = 2173457959U;
int zero = 0;
unsigned int var_18 = 829431631U;
long long int var_19 = 8597819064658654816LL;
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
