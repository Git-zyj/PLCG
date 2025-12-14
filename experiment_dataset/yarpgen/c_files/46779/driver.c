#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-671;
unsigned int var_4 = 1647950615U;
signed char var_7 = (signed char)-48;
int zero = 0;
unsigned long long int var_20 = 8813566155349831317ULL;
unsigned char var_21 = (unsigned char)38;
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
