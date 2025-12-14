#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-104;
signed char var_8 = (signed char)108;
signed char var_10 = (signed char)-7;
signed char var_15 = (signed char)-1;
int zero = 0;
int var_17 = -1719092453;
signed char var_18 = (signed char)-61;
int var_19 = 210944646;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
