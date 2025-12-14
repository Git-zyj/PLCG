#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6475981707404740435ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 119513226U;
unsigned char var_13 = (unsigned char)92;
int zero = 0;
signed char var_20 = (signed char)20;
signed char var_21 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
