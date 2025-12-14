#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned long long int var_1 = 11794225648261592350ULL;
long long int var_5 = -1985188478546276203LL;
int var_7 = 106530969;
unsigned char var_8 = (unsigned char)19;
int zero = 0;
long long int var_12 = 5426722379302401245LL;
unsigned long long int var_13 = 1626030956422855519ULL;
int var_14 = -316895758;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
