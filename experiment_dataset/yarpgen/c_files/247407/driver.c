#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1685520750;
short var_6 = (short)4176;
signed char var_8 = (signed char)-95;
long long int var_9 = 1467801991615120970LL;
int zero = 0;
short var_11 = (short)-24305;
unsigned short var_12 = (unsigned short)59663;
signed char var_13 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
