#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12367829097516812310ULL;
int var_5 = 1939115193;
short var_6 = (short)14230;
long long int var_8 = -338960428810318486LL;
unsigned int var_14 = 1255690815U;
short var_15 = (short)23586;
int zero = 0;
unsigned long long int var_16 = 7640875598874325614ULL;
int var_17 = 2057636723;
int var_18 = 723307857;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
