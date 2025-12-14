#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12444434819435526537ULL;
int var_4 = 1850447525;
unsigned short var_9 = (unsigned short)1882;
int var_10 = -1159455618;
int var_11 = -88957811;
int zero = 0;
long long int var_12 = -6996879920456938448LL;
unsigned char var_13 = (unsigned char)225;
unsigned long long int var_14 = 1234383534195491004ULL;
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
