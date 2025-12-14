#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 892735017U;
short var_8 = (short)1134;
unsigned short var_14 = (unsigned short)58179;
signed char var_17 = (signed char)87;
int zero = 0;
unsigned int var_19 = 685652634U;
short var_20 = (short)-4839;
unsigned long long int var_21 = 4883716514531978017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
