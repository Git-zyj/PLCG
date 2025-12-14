#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
unsigned short var_1 = (unsigned short)53724;
int var_3 = 663523814;
unsigned char var_4 = (unsigned char)23;
unsigned long long int var_7 = 9653895200072064048ULL;
short var_10 = (short)-27046;
int var_15 = -1991141503;
int var_16 = 1937077310;
int zero = 0;
long long int var_18 = -2156505969177210887LL;
unsigned int var_19 = 4088085281U;
unsigned char var_20 = (unsigned char)80;
short var_21 = (short)-6876;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
