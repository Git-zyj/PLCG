#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27952;
unsigned char var_1 = (unsigned char)254;
unsigned int var_3 = 4152740534U;
short var_6 = (short)19688;
int var_11 = 1731069021;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11235764531173849213ULL;
unsigned int var_15 = 1407875244U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
