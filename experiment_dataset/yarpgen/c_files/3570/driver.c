#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7082238421102532111ULL;
long long int var_3 = -8510942593908932407LL;
unsigned long long int var_5 = 14847530535527093525ULL;
unsigned long long int var_9 = 1970358619041555173ULL;
unsigned char var_13 = (unsigned char)67;
unsigned char var_14 = (unsigned char)106;
signed char var_16 = (signed char)76;
unsigned char var_18 = (unsigned char)150;
int zero = 0;
signed char var_20 = (signed char)73;
unsigned char var_21 = (unsigned char)124;
unsigned long long int var_22 = 11634878111611055030ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
