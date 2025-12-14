#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12054;
unsigned long long int var_9 = 18214849113883632301ULL;
unsigned long long int var_11 = 16728097564820928434ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)24544;
int zero = 0;
int var_19 = 1680124033;
unsigned char var_20 = (unsigned char)92;
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
