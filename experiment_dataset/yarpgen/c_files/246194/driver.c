#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)158;
unsigned short var_4 = (unsigned short)43803;
unsigned int var_8 = 262944944U;
unsigned short var_9 = (unsigned short)48660;
unsigned char var_11 = (unsigned char)194;
int zero = 0;
unsigned short var_12 = (unsigned short)2030;
signed char var_13 = (signed char)63;
long long int var_14 = 5334387620850032372LL;
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
