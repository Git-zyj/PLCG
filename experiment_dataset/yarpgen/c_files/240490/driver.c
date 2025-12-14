#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7198302622553185775ULL;
unsigned int var_2 = 1271406746U;
unsigned int var_4 = 531506253U;
int var_6 = -863460935;
unsigned char var_7 = (unsigned char)162;
unsigned long long int var_10 = 2667658879709731437ULL;
int zero = 0;
unsigned int var_11 = 541289780U;
unsigned long long int var_12 = 8683862963230561369ULL;
unsigned char var_13 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
