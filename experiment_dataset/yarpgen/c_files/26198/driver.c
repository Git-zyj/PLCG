#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3373632883298920523LL;
unsigned int var_3 = 3974669337U;
int var_4 = -1686910359;
int var_5 = 2020735954;
unsigned short var_7 = (unsigned short)14093;
int zero = 0;
unsigned long long int var_11 = 6679069419283950033ULL;
unsigned long long int var_12 = 5975729568873709341ULL;
void init() {
}

void checksum() {
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
