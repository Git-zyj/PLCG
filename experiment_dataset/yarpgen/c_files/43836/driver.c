#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
signed char var_3 = (signed char)-78;
int var_7 = -1613808973;
int var_13 = -973862377;
short var_16 = (short)-7096;
signed char var_17 = (signed char)12;
int zero = 0;
signed char var_19 = (signed char)-26;
int var_20 = 1243813869;
signed char var_21 = (signed char)43;
signed char var_22 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
