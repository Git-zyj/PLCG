#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6882654945414327173ULL;
signed char var_4 = (signed char)-104;
unsigned char var_6 = (unsigned char)195;
short var_7 = (short)-19405;
int zero = 0;
unsigned int var_10 = 2179709407U;
unsigned char var_11 = (unsigned char)58;
unsigned long long int var_12 = 15391404666882243281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
