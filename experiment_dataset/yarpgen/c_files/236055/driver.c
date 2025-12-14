#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31841;
unsigned int var_3 = 3757931960U;
int var_4 = -1121015648;
signed char var_9 = (signed char)68;
int zero = 0;
int var_12 = -1863499419;
signed char var_13 = (signed char)-36;
int var_14 = -170564747;
unsigned int var_15 = 2548642601U;
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
