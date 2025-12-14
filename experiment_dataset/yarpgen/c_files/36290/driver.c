#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24151;
unsigned short var_3 = (unsigned short)2693;
unsigned long long int var_4 = 727246108810859755ULL;
unsigned char var_6 = (unsigned char)95;
unsigned char var_7 = (unsigned char)37;
int zero = 0;
int var_10 = -1737655444;
unsigned short var_11 = (unsigned short)41629;
unsigned char var_12 = (unsigned char)0;
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
