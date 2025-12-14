#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-97;
int var_4 = 2061169969;
int var_6 = -1949361980;
int var_9 = -569525273;
int zero = 0;
unsigned int var_14 = 4093408509U;
signed char var_15 = (signed char)26;
unsigned char var_16 = (unsigned char)24;
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
