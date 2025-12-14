#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44827;
unsigned long long int var_5 = 16032092601004366247ULL;
signed char var_6 = (signed char)-107;
int zero = 0;
unsigned long long int var_12 = 5530886978424352825ULL;
int var_13 = -442778543;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
