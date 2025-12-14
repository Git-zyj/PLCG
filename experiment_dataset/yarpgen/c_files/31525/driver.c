#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36497;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 17783459245361844538ULL;
int var_8 = -2081947106;
int var_9 = 2087064925;
int zero = 0;
unsigned short var_20 = (unsigned short)24721;
int var_21 = 1625428589;
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
