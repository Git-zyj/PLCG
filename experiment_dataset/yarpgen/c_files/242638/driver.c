#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7241541117446898759ULL;
unsigned long long int var_4 = 2702509537618025130ULL;
unsigned char var_6 = (unsigned char)245;
unsigned short var_19 = (unsigned short)56504;
int zero = 0;
int var_20 = 108967205;
unsigned int var_21 = 2920044125U;
unsigned short var_22 = (unsigned short)20290;
signed char var_23 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
