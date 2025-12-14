#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)221;
unsigned long long int var_4 = 9140430867596936182ULL;
signed char var_9 = (signed char)30;
unsigned char var_11 = (unsigned char)41;
int zero = 0;
signed char var_15 = (signed char)-50;
unsigned long long int var_16 = 5064295556671122095ULL;
unsigned long long int var_17 = 3759530980669744393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
