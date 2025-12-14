#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3313926795972449981ULL;
unsigned char var_7 = (unsigned char)209;
short var_10 = (short)-9054;
unsigned char var_11 = (unsigned char)137;
int zero = 0;
unsigned char var_12 = (unsigned char)126;
short var_13 = (short)-31329;
signed char var_14 = (signed char)0;
unsigned short var_15 = (unsigned short)49659;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
