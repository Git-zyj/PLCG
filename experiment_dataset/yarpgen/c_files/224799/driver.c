#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
int var_2 = 1262661832;
unsigned short var_5 = (unsigned short)46818;
unsigned short var_8 = (unsigned short)39917;
unsigned long long int var_11 = 11985506663621346174ULL;
unsigned long long int var_13 = 10390911815474241775ULL;
long long int var_14 = 1682629209770878692LL;
int zero = 0;
unsigned long long int var_16 = 9626460618642658855ULL;
signed char var_17 = (signed char)-38;
unsigned long long int var_18 = 1111757680211490983ULL;
short var_19 = (short)8224;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
