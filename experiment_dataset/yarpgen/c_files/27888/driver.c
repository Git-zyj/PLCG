#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)5239;
signed char var_6 = (signed char)-97;
unsigned short var_8 = (unsigned short)21950;
int zero = 0;
unsigned long long int var_12 = 4740585430414243486ULL;
unsigned short var_13 = (unsigned short)11606;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
