#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3162050898209901075LL;
long long int var_3 = 8666574629436536843LL;
unsigned short var_4 = (unsigned short)27334;
long long int var_9 = -1130789450229951260LL;
int zero = 0;
unsigned short var_17 = (unsigned short)48522;
unsigned short var_18 = (unsigned short)52691;
unsigned short var_19 = (unsigned short)37537;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
