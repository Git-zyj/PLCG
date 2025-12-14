#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3797854202U;
unsigned short var_1 = (unsigned short)17616;
signed char var_11 = (signed char)115;
short var_15 = (short)15640;
int zero = 0;
signed char var_19 = (signed char)8;
short var_20 = (short)-19531;
unsigned long long int var_21 = 15549403613279213144ULL;
unsigned int var_22 = 4114206198U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
