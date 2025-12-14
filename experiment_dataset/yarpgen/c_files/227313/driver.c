#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10977338523997063275ULL;
unsigned int var_4 = 363989769U;
unsigned char var_6 = (unsigned char)234;
unsigned long long int var_7 = 13728733970812971316ULL;
unsigned short var_13 = (unsigned short)55250;
int zero = 0;
signed char var_17 = (signed char)71;
long long int var_18 = -2348265806172898416LL;
int var_19 = 1121081999;
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
