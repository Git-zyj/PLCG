#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
short var_1 = (short)-24011;
unsigned long long int var_2 = 16336197705930226408ULL;
signed char var_4 = (signed char)-36;
unsigned long long int var_10 = 3996509591715919870ULL;
int zero = 0;
int var_11 = -900727272;
unsigned int var_12 = 1573079014U;
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
