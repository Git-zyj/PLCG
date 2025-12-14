#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)88;
unsigned int var_7 = 2927769967U;
int zero = 0;
unsigned long long int var_11 = 14929056351918019146ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16795844551424853795ULL;
unsigned long long int var_14 = 3584695974259788946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
