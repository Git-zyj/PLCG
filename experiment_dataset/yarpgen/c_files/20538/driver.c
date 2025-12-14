#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3826013418U;
unsigned long long int var_2 = 13993934187391265204ULL;
unsigned long long int var_4 = 12574106067168445536ULL;
unsigned int var_6 = 1909724930U;
short var_7 = (short)-23459;
unsigned short var_14 = (unsigned short)46822;
int zero = 0;
unsigned int var_17 = 1951849626U;
int var_18 = -1456295129;
void init() {
}

void checksum() {
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
