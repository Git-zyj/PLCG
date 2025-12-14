#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 3357261695910019095ULL;
signed char var_10 = (signed char)-120;
unsigned long long int var_13 = 13358573668817120776ULL;
int zero = 0;
signed char var_19 = (signed char)68;
short var_20 = (short)14958;
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
