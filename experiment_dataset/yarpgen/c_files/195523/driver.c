#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13764520833187075315ULL;
unsigned long long int var_4 = 8891471416512611380ULL;
unsigned int var_5 = 3031058533U;
unsigned short var_7 = (unsigned short)29177;
int zero = 0;
unsigned short var_10 = (unsigned short)40761;
unsigned short var_11 = (unsigned short)51738;
unsigned short var_12 = (unsigned short)26098;
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
