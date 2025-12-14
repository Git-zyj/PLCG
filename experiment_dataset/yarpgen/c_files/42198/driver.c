#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7009;
unsigned short var_3 = (unsigned short)62033;
int var_4 = -775336976;
unsigned int var_6 = 3207140249U;
signed char var_8 = (signed char)59;
unsigned short var_9 = (unsigned short)32196;
unsigned short var_10 = (unsigned short)25580;
int zero = 0;
signed char var_12 = (signed char)21;
int var_13 = 727610763;
int var_14 = -1742614846;
int var_15 = -2138287095;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
