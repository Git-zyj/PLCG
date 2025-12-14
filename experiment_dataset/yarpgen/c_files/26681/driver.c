#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19093;
unsigned char var_3 = (unsigned char)216;
unsigned char var_6 = (unsigned char)132;
unsigned long long int var_13 = 4104981453654991292ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)87;
unsigned short var_20 = (unsigned short)15267;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
