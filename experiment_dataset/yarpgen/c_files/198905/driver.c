#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 12874703U;
short var_5 = (short)14458;
int var_14 = 1203401597;
int zero = 0;
short var_20 = (short)-3412;
unsigned int var_21 = 3729054921U;
unsigned short var_22 = (unsigned short)8727;
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
