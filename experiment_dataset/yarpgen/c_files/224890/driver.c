#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5266002124584454004ULL;
signed char var_6 = (signed char)48;
int var_8 = 137536704;
int zero = 0;
unsigned short var_16 = (unsigned short)38687;
signed char var_17 = (signed char)93;
void init() {
}

void checksum() {
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
