#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22277;
signed char var_4 = (signed char)-47;
signed char var_5 = (signed char)-67;
short var_10 = (short)-30505;
int zero = 0;
unsigned char var_11 = (unsigned char)83;
short var_12 = (short)29595;
signed char var_13 = (signed char)94;
short var_14 = (short)-24998;
short var_15 = (short)-30159;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
