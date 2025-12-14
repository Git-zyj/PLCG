#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -272128213;
unsigned long long int var_6 = 15085799876159720533ULL;
unsigned short var_7 = (unsigned short)56316;
unsigned short var_10 = (unsigned short)10918;
int zero = 0;
unsigned short var_11 = (unsigned short)20096;
signed char var_12 = (signed char)74;
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
