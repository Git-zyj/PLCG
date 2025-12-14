#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -530849485;
signed char var_6 = (signed char)35;
unsigned int var_13 = 3229620341U;
signed char var_14 = (signed char)26;
int zero = 0;
short var_15 = (short)21852;
unsigned long long int var_16 = 16406354167530579345ULL;
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
