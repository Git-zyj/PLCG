#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)150;
unsigned char var_8 = (unsigned char)79;
signed char var_11 = (signed char)-108;
unsigned long long int var_18 = 7654124584612112650ULL;
int zero = 0;
unsigned int var_20 = 86692211U;
short var_21 = (short)-12923;
long long int var_22 = -1145827505192942956LL;
void init() {
}

void checksum() {
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
