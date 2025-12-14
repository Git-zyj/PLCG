#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7641248689181149227LL;
unsigned int var_2 = 3403956304U;
int var_3 = 1272365929;
unsigned char var_5 = (unsigned char)30;
unsigned long long int var_8 = 8931838922885096151ULL;
unsigned char var_11 = (unsigned char)176;
int zero = 0;
signed char var_13 = (signed char)-24;
long long int var_14 = 4302559443751568838LL;
unsigned int var_15 = 686878935U;
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
