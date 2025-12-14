#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
signed char var_2 = (signed char)71;
unsigned int var_4 = 288734243U;
short var_16 = (short)-19381;
int zero = 0;
short var_17 = (short)-27145;
short var_18 = (short)26842;
unsigned long long int var_19 = 10184121435236654895ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
