#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2618674966U;
unsigned char var_3 = (unsigned char)242;
short var_8 = (short)18236;
int zero = 0;
unsigned long long int var_12 = 16630181372753009996ULL;
unsigned long long int var_13 = 17238871690529959428ULL;
short var_14 = (short)-9368;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
