#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-92;
signed char var_10 = (signed char)127;
unsigned long long int var_15 = 1964694115589348253ULL;
int zero = 0;
unsigned long long int var_18 = 8739339906211477604ULL;
signed char var_19 = (signed char)99;
unsigned long long int var_20 = 14052534031001992186ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
