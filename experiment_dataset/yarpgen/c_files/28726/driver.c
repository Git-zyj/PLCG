#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11222;
signed char var_4 = (signed char)-61;
int var_12 = -429362172;
short var_15 = (short)16474;
int zero = 0;
unsigned long long int var_19 = 6974974550630724661ULL;
int var_20 = -266849916;
short var_21 = (short)-29475;
unsigned char var_22 = (unsigned char)241;
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
