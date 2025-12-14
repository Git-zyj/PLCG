#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58962;
signed char var_2 = (signed char)122;
unsigned int var_3 = 1521590969U;
unsigned short var_4 = (unsigned short)5942;
unsigned int var_7 = 4289918570U;
signed char var_8 = (signed char)-12;
int zero = 0;
unsigned long long int var_11 = 11472426973078963419ULL;
short var_12 = (short)16046;
int var_13 = 1513231686;
signed char var_14 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
