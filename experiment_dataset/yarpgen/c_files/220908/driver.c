#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1389655995U;
int var_6 = 115990048;
signed char var_9 = (signed char)20;
short var_11 = (short)3555;
int zero = 0;
short var_13 = (short)1702;
int var_14 = 1873107897;
unsigned long long int var_15 = 649805264530506290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
