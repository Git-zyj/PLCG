#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)2;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)85;
unsigned long long int var_14 = 4958158605511733946ULL;
int zero = 0;
unsigned long long int var_19 = 5389247777826462269ULL;
long long int var_20 = 359295103960745657LL;
unsigned short var_21 = (unsigned short)11128;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
