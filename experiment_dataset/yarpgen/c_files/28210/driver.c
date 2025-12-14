#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3816766770U;
unsigned int var_6 = 1543400602U;
unsigned short var_11 = (unsigned short)13054;
unsigned short var_13 = (unsigned short)34679;
int zero = 0;
int var_15 = 1013528905;
int var_16 = 73565180;
int var_17 = 311411027;
unsigned int var_18 = 324551700U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
