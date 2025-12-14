#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1032194028U;
unsigned short var_1 = (unsigned short)15078;
unsigned short var_13 = (unsigned short)57513;
int zero = 0;
int var_15 = 1296488144;
unsigned short var_16 = (unsigned short)56967;
void init() {
}

void checksum() {
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
