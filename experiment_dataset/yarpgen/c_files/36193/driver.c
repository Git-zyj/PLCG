#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6825270136610993538LL;
signed char var_10 = (signed char)114;
int zero = 0;
unsigned short var_20 = (unsigned short)42787;
unsigned int var_21 = 2567383444U;
short var_22 = (short)11927;
int var_23 = -279140891;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
