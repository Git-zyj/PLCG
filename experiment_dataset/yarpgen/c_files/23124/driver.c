#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)31;
unsigned int var_4 = 3645507234U;
unsigned char var_8 = (unsigned char)149;
unsigned long long int var_9 = 14440403908312178110ULL;
int zero = 0;
unsigned long long int var_10 = 2582016290855477735ULL;
unsigned long long int var_11 = 1293097183875244067ULL;
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
