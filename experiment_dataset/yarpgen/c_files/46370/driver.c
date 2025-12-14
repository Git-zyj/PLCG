#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)227;
short var_2 = (short)-9657;
signed char var_5 = (signed char)-107;
long long int var_6 = 7004655857762727552LL;
short var_8 = (short)-23848;
int zero = 0;
unsigned short var_12 = (unsigned short)35071;
unsigned char var_13 = (unsigned char)125;
long long int var_14 = -4366704576415817847LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
