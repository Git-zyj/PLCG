#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-75;
unsigned int var_6 = 1384271991U;
signed char var_9 = (signed char)-86;
signed char var_10 = (signed char)-68;
int zero = 0;
signed char var_11 = (signed char)-76;
unsigned char var_12 = (unsigned char)28;
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
