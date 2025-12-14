#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29810;
long long int var_4 = 6858005646584480351LL;
short var_11 = (short)-13977;
unsigned int var_13 = 3480889281U;
int zero = 0;
unsigned int var_14 = 2952826904U;
long long int var_15 = -6093821478529883572LL;
short var_16 = (short)-24348;
signed char var_17 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
