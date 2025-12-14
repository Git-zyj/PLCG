#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8066159655776616761LL;
unsigned char var_1 = (unsigned char)98;
unsigned char var_3 = (unsigned char)110;
unsigned char var_10 = (unsigned char)241;
signed char var_12 = (signed char)-103;
signed char var_13 = (signed char)29;
int zero = 0;
short var_14 = (short)23783;
unsigned long long int var_15 = 5291140077997753938ULL;
void init() {
}

void checksum() {
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
