#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 565947985;
unsigned long long int var_2 = 11727293020187371319ULL;
unsigned int var_8 = 3401723490U;
signed char var_13 = (signed char)15;
unsigned long long int var_14 = 7761258903308609378ULL;
int zero = 0;
signed char var_19 = (signed char)53;
unsigned int var_20 = 1911467938U;
unsigned int var_21 = 4006775943U;
signed char var_22 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
