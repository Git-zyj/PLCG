#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1021475795;
unsigned int var_7 = 1831582387U;
signed char var_8 = (signed char)113;
unsigned short var_11 = (unsigned short)4324;
int zero = 0;
int var_12 = 331248900;
unsigned int var_13 = 953210928U;
int var_14 = -1187564748;
signed char var_15 = (signed char)-88;
int var_16 = 626679116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
