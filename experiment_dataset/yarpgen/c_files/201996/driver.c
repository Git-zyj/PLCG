#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1658923497;
short var_7 = (short)17060;
int var_8 = 935770453;
short var_9 = (short)3789;
int zero = 0;
int var_17 = 709591935;
unsigned long long int var_18 = 4507318906883907372ULL;
void init() {
}

void checksum() {
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
