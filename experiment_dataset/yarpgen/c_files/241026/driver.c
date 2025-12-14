#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)147;
int var_4 = -1744433315;
unsigned short var_5 = (unsigned short)36205;
unsigned long long int var_8 = 4790789251666564641ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)5797;
int var_13 = -1741690950;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
