#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1920857206;
unsigned int var_6 = 3482407292U;
unsigned short var_11 = (unsigned short)20968;
int zero = 0;
int var_13 = 156452240;
signed char var_14 = (signed char)-12;
unsigned char var_15 = (unsigned char)61;
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
