#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23776;
unsigned char var_7 = (unsigned char)245;
long long int var_12 = -853103695429925925LL;
int zero = 0;
int var_13 = -902255867;
unsigned char var_14 = (unsigned char)66;
unsigned long long int var_15 = 13836055183278619713ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
