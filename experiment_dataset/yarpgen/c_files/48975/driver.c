#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2895631227634282920ULL;
unsigned char var_2 = (unsigned char)218;
unsigned int var_3 = 1636144262U;
unsigned short var_5 = (unsigned short)60891;
unsigned char var_6 = (unsigned char)163;
unsigned short var_7 = (unsigned short)25593;
unsigned char var_10 = (unsigned char)23;
int zero = 0;
signed char var_11 = (signed char)-91;
unsigned int var_12 = 3415434192U;
unsigned char var_13 = (unsigned char)38;
int var_14 = -525049840;
unsigned int var_15 = 120335827U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
