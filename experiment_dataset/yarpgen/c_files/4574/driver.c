#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1876300894;
int var_12 = 1777766708;
signed char var_13 = (signed char)-23;
int var_14 = -274195024;
int var_15 = -1949872487;
int zero = 0;
short var_19 = (short)-4049;
unsigned char var_20 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
