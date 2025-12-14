#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)53;
int var_5 = -326150596;
long long int var_8 = 8452327188790739853LL;
long long int var_12 = 8218173897655138433LL;
unsigned int var_13 = 2116205414U;
int zero = 0;
int var_14 = 2030584355;
unsigned char var_15 = (unsigned char)99;
void init() {
}

void checksum() {
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
