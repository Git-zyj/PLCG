#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33961;
unsigned char var_8 = (unsigned char)125;
unsigned short var_10 = (unsigned short)54791;
long long int var_12 = 4688409282223933099LL;
int zero = 0;
unsigned int var_13 = 184445640U;
unsigned long long int var_14 = 1224434814900009349ULL;
unsigned char var_15 = (unsigned char)255;
unsigned int var_16 = 2239777527U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
