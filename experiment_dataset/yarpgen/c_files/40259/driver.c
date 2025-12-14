#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)10469;
unsigned short var_12 = (unsigned short)43620;
unsigned short var_15 = (unsigned short)64107;
int zero = 0;
int var_16 = 1353144896;
unsigned int var_17 = 1838608438U;
int var_18 = 913356001;
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
