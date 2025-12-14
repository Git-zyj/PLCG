#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 442049872;
unsigned long long int var_1 = 1245626963557144335ULL;
signed char var_3 = (signed char)58;
unsigned char var_6 = (unsigned char)143;
unsigned long long int var_7 = 11198486256152880549ULL;
int var_11 = 1585370735;
int var_12 = 477764117;
unsigned int var_13 = 1020001513U;
int zero = 0;
signed char var_15 = (signed char)-92;
unsigned char var_16 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
