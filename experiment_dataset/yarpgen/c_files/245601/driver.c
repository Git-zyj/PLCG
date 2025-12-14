#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-76;
unsigned long long int var_3 = 14742625903124937372ULL;
unsigned char var_5 = (unsigned char)4;
short var_11 = (short)-3861;
int zero = 0;
unsigned long long int var_16 = 7662336747432542310ULL;
unsigned int var_17 = 844254981U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
