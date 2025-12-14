#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12300;
unsigned short var_1 = (unsigned short)20128;
unsigned char var_7 = (unsigned char)52;
int zero = 0;
unsigned int var_13 = 1913880854U;
int var_14 = -423161140;
unsigned int var_15 = 4215465450U;
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
