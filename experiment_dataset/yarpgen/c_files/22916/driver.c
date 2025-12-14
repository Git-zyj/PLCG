#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 850298226;
unsigned long long int var_4 = 6775788015554102013ULL;
int var_6 = 1571598032;
unsigned long long int var_10 = 12954233137200298092ULL;
signed char var_11 = (signed char)-39;
unsigned char var_13 = (unsigned char)113;
int zero = 0;
unsigned char var_15 = (unsigned char)61;
signed char var_16 = (signed char)25;
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
