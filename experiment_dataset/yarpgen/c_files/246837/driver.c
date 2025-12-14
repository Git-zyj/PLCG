#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
short var_1 = (short)-19836;
short var_4 = (short)-21968;
signed char var_7 = (signed char)-47;
signed char var_11 = (signed char)66;
int zero = 0;
unsigned long long int var_13 = 6863177958800477904ULL;
short var_14 = (short)4497;
unsigned int var_15 = 939128097U;
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
