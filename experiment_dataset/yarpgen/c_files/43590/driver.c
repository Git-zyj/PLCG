#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4975;
int var_3 = -819116687;
int var_8 = -698041971;
short var_10 = (short)-32145;
unsigned int var_13 = 2613203985U;
unsigned long long int var_18 = 5919067462582361817ULL;
int zero = 0;
signed char var_20 = (signed char)101;
unsigned char var_21 = (unsigned char)204;
int var_22 = -827129993;
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
