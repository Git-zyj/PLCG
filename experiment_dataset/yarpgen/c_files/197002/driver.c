#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5564491938463546176ULL;
unsigned char var_5 = (unsigned char)190;
short var_16 = (short)11374;
signed char var_17 = (signed char)31;
int zero = 0;
unsigned long long int var_19 = 1243277168153106472ULL;
unsigned short var_20 = (unsigned short)15373;
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
