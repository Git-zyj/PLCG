#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
int var_2 = 1304553412;
unsigned char var_8 = (unsigned char)157;
unsigned char var_14 = (unsigned char)24;
unsigned char var_16 = (unsigned char)198;
int zero = 0;
unsigned long long int var_18 = 9517708430187423751ULL;
unsigned char var_19 = (unsigned char)255;
long long int var_20 = -7814892224623486739LL;
signed char var_21 = (signed char)2;
int var_22 = -1971769998;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
