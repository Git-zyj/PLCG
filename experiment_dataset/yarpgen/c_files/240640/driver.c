#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)31756;
unsigned int var_10 = 570629855U;
short var_18 = (short)-28148;
int zero = 0;
unsigned int var_20 = 1485482535U;
unsigned long long int var_21 = 1500544738810571625ULL;
signed char var_22 = (signed char)4;
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
