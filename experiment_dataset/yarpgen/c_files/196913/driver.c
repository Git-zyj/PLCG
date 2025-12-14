#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 180527563;
unsigned int var_5 = 1034132785U;
unsigned long long int var_8 = 1345072519584757380ULL;
unsigned short var_9 = (unsigned short)12427;
unsigned char var_13 = (unsigned char)224;
int zero = 0;
signed char var_15 = (signed char)78;
unsigned long long int var_16 = 2438815183315036671ULL;
signed char var_17 = (signed char)88;
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
