#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12826893216531194738ULL;
unsigned int var_14 = 450141118U;
unsigned int var_16 = 1817811303U;
long long int var_17 = 1601914957711764546LL;
int zero = 0;
unsigned char var_18 = (unsigned char)127;
unsigned char var_19 = (unsigned char)239;
signed char var_20 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
