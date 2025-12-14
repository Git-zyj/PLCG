#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13000153323329315166ULL;
unsigned short var_12 = (unsigned short)63898;
unsigned short var_15 = (unsigned short)61562;
signed char var_17 = (signed char)-43;
unsigned short var_18 = (unsigned short)8945;
int zero = 0;
int var_20 = -301378696;
unsigned int var_21 = 2497402740U;
signed char var_22 = (signed char)87;
void init() {
}

void checksum() {
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
