#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1880999200;
unsigned char var_6 = (unsigned char)229;
int var_11 = 1188451101;
int zero = 0;
unsigned short var_20 = (unsigned short)3891;
unsigned char var_21 = (unsigned char)103;
int var_22 = -1661373950;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
