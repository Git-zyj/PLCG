#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1736;
unsigned short var_11 = (unsigned short)44887;
unsigned int var_12 = 2126821935U;
unsigned long long int var_14 = 10607669463719510404ULL;
signed char var_15 = (signed char)93;
int var_19 = -1722129074;
int zero = 0;
int var_20 = 1924199754;
unsigned long long int var_21 = 2417737574900301698ULL;
unsigned long long int var_22 = 12810676695065259134ULL;
signed char var_23 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
