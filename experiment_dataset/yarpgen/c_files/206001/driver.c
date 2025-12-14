#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1759592136;
int var_2 = 615092568;
unsigned short var_8 = (unsigned short)14866;
unsigned char var_16 = (unsigned char)175;
int zero = 0;
short var_20 = (short)-15604;
short var_21 = (short)-11;
unsigned long long int var_22 = 11783118800238025581ULL;
long long int var_23 = 5459793898911753471LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
