#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-84;
unsigned int var_4 = 437859784U;
signed char var_8 = (signed char)-112;
unsigned char var_9 = (unsigned char)99;
int zero = 0;
signed char var_13 = (signed char)-47;
signed char var_14 = (signed char)39;
unsigned int var_15 = 1747870318U;
void init() {
}

void checksum() {
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
