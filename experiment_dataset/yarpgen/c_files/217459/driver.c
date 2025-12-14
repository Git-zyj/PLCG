#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
unsigned char var_4 = (unsigned char)53;
unsigned int var_8 = 3526297922U;
unsigned short var_9 = (unsigned short)6662;
int zero = 0;
unsigned int var_10 = 2422575963U;
int var_11 = 1579826844;
unsigned long long int var_12 = 14290973177448418952ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
