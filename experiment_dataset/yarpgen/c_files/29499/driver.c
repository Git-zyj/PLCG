#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 592466785U;
unsigned short var_4 = (unsigned short)48803;
unsigned int var_7 = 3650810885U;
int zero = 0;
unsigned short var_11 = (unsigned short)4733;
unsigned int var_12 = 260585129U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
