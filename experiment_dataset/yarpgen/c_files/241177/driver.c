#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
unsigned short var_2 = (unsigned short)10352;
unsigned long long int var_6 = 16101352819963150211ULL;
unsigned char var_7 = (unsigned char)188;
unsigned long long int var_8 = 2959800834803445646ULL;
int zero = 0;
unsigned long long int var_11 = 9797948966181101112ULL;
unsigned char var_12 = (unsigned char)36;
void init() {
}

void checksum() {
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
