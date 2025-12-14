#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 797507788;
unsigned int var_3 = 3748400017U;
int var_6 = 2112753628;
unsigned int var_7 = 1230732235U;
int var_11 = -1633486774;
unsigned int var_12 = 2409495731U;
int zero = 0;
unsigned int var_14 = 150454321U;
int var_15 = 108385735;
void init() {
}

void checksum() {
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
