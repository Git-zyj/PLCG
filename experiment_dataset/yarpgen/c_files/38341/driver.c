#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32444;
int var_9 = 1817103019;
unsigned long long int var_12 = 3848376091090887037ULL;
unsigned short var_14 = (unsigned short)52917;
int zero = 0;
unsigned short var_19 = (unsigned short)11764;
signed char var_20 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
