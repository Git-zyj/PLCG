#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15068181987495814408ULL;
unsigned char var_10 = (unsigned char)134;
unsigned long long int var_12 = 7507993783186496981ULL;
unsigned char var_17 = (unsigned char)101;
int zero = 0;
unsigned char var_18 = (unsigned char)48;
unsigned short var_19 = (unsigned short)63207;
void init() {
}

void checksum() {
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
