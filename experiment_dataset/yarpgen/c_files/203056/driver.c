#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 394662755;
unsigned int var_6 = 2583831282U;
signed char var_7 = (signed char)8;
unsigned char var_13 = (unsigned char)196;
short var_14 = (short)-9648;
int zero = 0;
unsigned int var_15 = 3784003804U;
signed char var_16 = (signed char)-107;
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
