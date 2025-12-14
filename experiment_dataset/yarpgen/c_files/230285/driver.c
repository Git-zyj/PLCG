#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)79;
unsigned short var_3 = (unsigned short)17350;
unsigned char var_5 = (unsigned char)252;
unsigned char var_17 = (unsigned char)109;
int zero = 0;
unsigned long long int var_19 = 5412535269270572708ULL;
int var_20 = 2109035103;
short var_21 = (short)2629;
unsigned char var_22 = (unsigned char)27;
unsigned char var_23 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
