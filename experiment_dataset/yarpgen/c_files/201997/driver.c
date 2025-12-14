#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37732;
unsigned char var_3 = (unsigned char)52;
unsigned int var_8 = 3347605672U;
int zero = 0;
unsigned char var_13 = (unsigned char)214;
unsigned short var_14 = (unsigned short)17266;
int var_15 = 468223335;
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
