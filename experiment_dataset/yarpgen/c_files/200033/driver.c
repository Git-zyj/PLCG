#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1995239497U;
unsigned long long int var_3 = 3844251368816938273ULL;
unsigned char var_7 = (unsigned char)100;
unsigned long long int var_11 = 10388415688582304772ULL;
long long int var_12 = -3428770855377267655LL;
long long int var_13 = 6332707477997730249LL;
unsigned char var_16 = (unsigned char)61;
unsigned int var_17 = 1123871440U;
unsigned int var_18 = 390916983U;
int zero = 0;
long long int var_19 = -1008299110451338660LL;
long long int var_20 = 5045472761084827858LL;
short var_21 = (short)-652;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
