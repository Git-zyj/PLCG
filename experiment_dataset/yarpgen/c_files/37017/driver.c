#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)16;
unsigned long long int var_5 = 3331739887236217517ULL;
unsigned long long int var_6 = 10234774338870901954ULL;
unsigned char var_8 = (unsigned char)215;
int zero = 0;
short var_14 = (short)-11090;
int var_15 = 1634872642;
unsigned int var_16 = 2956238626U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
