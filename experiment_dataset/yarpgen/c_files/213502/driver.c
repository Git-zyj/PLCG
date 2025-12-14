#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12045;
unsigned long long int var_6 = 1400012795438164614ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)33;
unsigned long long int var_17 = 3532371757479903427ULL;
unsigned short var_18 = (unsigned short)40855;
short var_19 = (short)5099;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
