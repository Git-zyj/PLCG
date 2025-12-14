#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1021052325U;
unsigned long long int var_1 = 14191673761130955998ULL;
long long int var_2 = 8401484501594576116LL;
short var_4 = (short)28684;
unsigned char var_6 = (unsigned char)140;
int zero = 0;
unsigned char var_11 = (unsigned char)34;
unsigned short var_12 = (unsigned short)46167;
unsigned char var_13 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
