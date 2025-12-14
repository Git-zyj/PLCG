#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)236;
unsigned int var_5 = 2143038805U;
unsigned int var_8 = 3456089229U;
int zero = 0;
unsigned char var_13 = (unsigned char)157;
short var_14 = (short)-19061;
unsigned short var_15 = (unsigned short)8825;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
