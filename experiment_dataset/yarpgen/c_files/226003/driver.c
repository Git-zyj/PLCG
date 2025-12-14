#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1642502274;
int var_3 = -146567157;
unsigned int var_6 = 2185562696U;
unsigned int var_7 = 2012436600U;
int zero = 0;
unsigned long long int var_10 = 5671524496526901567ULL;
short var_11 = (short)-2444;
unsigned long long int var_12 = 9176546420660440595ULL;
short var_13 = (short)-23426;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
