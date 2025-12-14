#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
int var_4 = -956191622;
unsigned long long int var_8 = 17757180675628859049ULL;
signed char var_9 = (signed char)-109;
int zero = 0;
signed char var_11 = (signed char)3;
signed char var_12 = (signed char)29;
int var_13 = -1129565126;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
