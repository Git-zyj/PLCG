#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 795536122U;
int var_10 = -684839915;
int var_13 = -1937024913;
unsigned int var_14 = 4027818006U;
int zero = 0;
unsigned short var_15 = (unsigned short)50914;
signed char var_16 = (signed char)-48;
unsigned long long int var_17 = 13639378207550358781ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
