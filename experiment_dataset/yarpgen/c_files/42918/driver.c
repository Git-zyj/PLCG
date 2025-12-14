#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21574;
int var_5 = -291141758;
unsigned short var_6 = (unsigned short)5903;
int var_8 = -642992760;
int var_16 = 113982333;
int zero = 0;
unsigned char var_19 = (unsigned char)166;
int var_20 = -1217293659;
unsigned long long int var_21 = 7118030133027950850ULL;
unsigned short var_22 = (unsigned short)32079;
void init() {
}

void checksum() {
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
