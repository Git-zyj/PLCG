#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1175008263U;
signed char var_7 = (signed char)-96;
short var_9 = (short)20787;
int zero = 0;
signed char var_12 = (signed char)-125;
unsigned short var_13 = (unsigned short)42412;
int var_14 = -2089772359;
unsigned short var_15 = (unsigned short)58508;
void init() {
}

void checksum() {
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
