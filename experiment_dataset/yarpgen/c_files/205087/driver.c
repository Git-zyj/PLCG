#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4650;
unsigned char var_3 = (unsigned char)22;
unsigned int var_8 = 1521618961U;
int zero = 0;
unsigned int var_12 = 2844040484U;
unsigned long long int var_13 = 1555075380690430138ULL;
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
