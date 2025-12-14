#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27191;
unsigned short var_3 = (unsigned short)34258;
unsigned long long int var_5 = 7552542191745708370ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3850516667375375024ULL;
unsigned short var_12 = (unsigned short)32360;
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
