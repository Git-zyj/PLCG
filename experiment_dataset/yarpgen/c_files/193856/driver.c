#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8913;
unsigned char var_2 = (unsigned char)242;
unsigned long long int var_10 = 18286251279145232391ULL;
unsigned char var_11 = (unsigned char)154;
unsigned char var_13 = (unsigned char)72;
int zero = 0;
unsigned char var_16 = (unsigned char)219;
unsigned char var_17 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
