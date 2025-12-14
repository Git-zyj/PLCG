#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2324033897948360532ULL;
unsigned char var_7 = (unsigned char)200;
int var_8 = 1612553448;
unsigned short var_12 = (unsigned short)60897;
int zero = 0;
unsigned short var_13 = (unsigned short)49103;
unsigned long long int var_14 = 11949326881517989146ULL;
short var_15 = (short)-946;
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
