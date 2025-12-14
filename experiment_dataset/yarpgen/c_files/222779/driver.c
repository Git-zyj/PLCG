#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 116630749U;
signed char var_4 = (signed char)-42;
unsigned long long int var_5 = 16743291737962224314ULL;
unsigned int var_7 = 576158611U;
unsigned char var_8 = (unsigned char)133;
int zero = 0;
unsigned int var_10 = 3499323783U;
int var_11 = 688498077;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
