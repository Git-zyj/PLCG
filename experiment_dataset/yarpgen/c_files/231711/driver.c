#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
unsigned char var_5 = (unsigned char)170;
unsigned long long int var_7 = 12295007288106208788ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)40;
unsigned int var_18 = 519677248U;
unsigned long long int var_19 = 15568736598903509817ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
