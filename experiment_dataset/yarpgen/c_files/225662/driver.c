#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2257304715U;
int var_14 = 566076749;
short var_15 = (short)-27028;
int zero = 0;
unsigned char var_20 = (unsigned char)73;
long long int var_21 = -1044831642001433598LL;
unsigned short var_22 = (unsigned short)38459;
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
