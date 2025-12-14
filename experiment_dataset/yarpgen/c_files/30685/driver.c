#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
signed char var_2 = (signed char)38;
int zero = 0;
unsigned int var_13 = 4109956859U;
unsigned char var_14 = (unsigned char)3;
unsigned long long int var_15 = 8278851085743279528ULL;
signed char var_16 = (signed char)116;
void init() {
}

void checksum() {
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
