#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4457157913347075379ULL;
unsigned int var_7 = 3320058698U;
signed char var_9 = (signed char)-60;
int zero = 0;
short var_10 = (short)28142;
signed char var_11 = (signed char)-103;
unsigned int var_12 = 1588402242U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
