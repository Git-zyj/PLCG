#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32075;
unsigned short var_6 = (unsigned short)6423;
unsigned short var_7 = (unsigned short)26792;
unsigned short var_8 = (unsigned short)35861;
unsigned int var_9 = 3735653333U;
unsigned short var_10 = (unsigned short)42363;
unsigned long long int var_17 = 9118759254804176797ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)109;
unsigned int var_20 = 1477315420U;
unsigned int var_21 = 3550017706U;
unsigned short var_22 = (unsigned short)41617;
unsigned int var_23 = 3037727208U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
