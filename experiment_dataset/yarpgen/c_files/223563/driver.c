#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1793608004;
unsigned int var_2 = 2141407787U;
int var_5 = -1602374138;
unsigned long long int var_12 = 18375638045775254505ULL;
int zero = 0;
signed char var_20 = (signed char)107;
signed char var_21 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
