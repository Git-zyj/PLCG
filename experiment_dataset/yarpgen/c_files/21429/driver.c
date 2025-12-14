#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1888621U;
unsigned int var_7 = 3048555410U;
unsigned char var_18 = (unsigned char)101;
int zero = 0;
unsigned long long int var_20 = 8515660151497544330ULL;
unsigned short var_21 = (unsigned short)8108;
unsigned long long int var_22 = 13582592205793941769ULL;
unsigned char var_23 = (unsigned char)201;
void init() {
}

void checksum() {
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
