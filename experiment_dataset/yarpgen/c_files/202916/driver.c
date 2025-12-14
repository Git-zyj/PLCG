#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 615572879U;
signed char var_10 = (signed char)56;
signed char var_15 = (signed char)43;
signed char var_19 = (signed char)106;
int zero = 0;
unsigned long long int var_20 = 7842408233589033053ULL;
signed char var_21 = (signed char)30;
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
