#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9139298339598252827ULL;
short var_8 = (short)11493;
signed char var_9 = (signed char)-7;
long long int var_11 = 3335606203176120708LL;
unsigned char var_14 = (unsigned char)217;
short var_15 = (short)9357;
int var_16 = -842765218;
unsigned long long int var_17 = 1816049047014201553ULL;
int zero = 0;
int var_19 = -904427083;
unsigned char var_20 = (unsigned char)56;
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
