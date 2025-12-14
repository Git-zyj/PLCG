#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -191412626;
unsigned short var_10 = (unsigned short)18907;
unsigned long long int var_11 = 12983613577454723790ULL;
int zero = 0;
signed char var_12 = (signed char)-84;
unsigned int var_13 = 385706263U;
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
