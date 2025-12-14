#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9231522895468895045ULL;
signed char var_2 = (signed char)32;
unsigned char var_6 = (unsigned char)93;
long long int var_8 = 4289865283113340763LL;
signed char var_13 = (signed char)41;
signed char var_15 = (signed char)77;
int zero = 0;
int var_16 = 1613176497;
short var_17 = (short)-13363;
unsigned int var_18 = 2657310268U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
