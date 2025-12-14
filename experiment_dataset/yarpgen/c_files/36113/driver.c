#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1663714748;
short var_4 = (short)12909;
int var_5 = 331415900;
int var_6 = -930482455;
unsigned int var_9 = 2843389087U;
int zero = 0;
int var_11 = -116269131;
unsigned short var_12 = (unsigned short)53963;
signed char var_13 = (signed char)67;
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
