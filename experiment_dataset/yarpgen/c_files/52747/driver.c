#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
unsigned int var_11 = 3015933135U;
int var_15 = -1106147170;
signed char var_17 = (signed char)79;
int zero = 0;
unsigned int var_19 = 709004236U;
unsigned long long int var_20 = 18264751237978566241ULL;
void init() {
}

void checksum() {
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
