#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-34;
unsigned short var_13 = (unsigned short)40969;
unsigned short var_15 = (unsigned short)61386;
unsigned char var_16 = (unsigned char)170;
int zero = 0;
unsigned short var_19 = (unsigned short)48140;
unsigned short var_20 = (unsigned short)21539;
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
