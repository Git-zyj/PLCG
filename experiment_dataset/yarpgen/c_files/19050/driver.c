#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 730035812980887419ULL;
int var_3 = 437484648;
unsigned long long int var_7 = 5825587075571574994ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)19;
unsigned int var_12 = 3242635624U;
void init() {
}

void checksum() {
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
