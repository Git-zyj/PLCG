#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -771817576;
short var_6 = (short)-29541;
signed char var_8 = (signed char)62;
int var_11 = 1133435062;
int zero = 0;
unsigned int var_12 = 2709017515U;
long long int var_13 = -1102956242766393983LL;
unsigned int var_14 = 1135174126U;
short var_15 = (short)-10468;
int var_16 = 526230777;
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
