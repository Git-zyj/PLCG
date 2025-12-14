#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48659;
unsigned int var_10 = 270666304U;
unsigned short var_11 = (unsigned short)32193;
int zero = 0;
unsigned long long int var_15 = 486602197627025384ULL;
long long int var_16 = 208774067732656959LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
