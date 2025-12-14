#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1859296965811092902ULL;
unsigned long long int var_3 = 2919055481896535816ULL;
unsigned int var_7 = 2942516127U;
signed char var_8 = (signed char)-84;
unsigned long long int var_13 = 9596194697469484151ULL;
int zero = 0;
int var_20 = 1960075612;
unsigned int var_21 = 4205561838U;
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
