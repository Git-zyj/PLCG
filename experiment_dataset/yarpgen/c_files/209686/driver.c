#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9739199902967279571ULL;
signed char var_3 = (signed char)112;
unsigned short var_9 = (unsigned short)19023;
unsigned short var_12 = (unsigned short)18303;
unsigned char var_16 = (unsigned char)203;
unsigned char var_17 = (unsigned char)252;
int var_18 = -1506673326;
int zero = 0;
unsigned long long int var_19 = 12158929420325687468ULL;
short var_20 = (short)-24160;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
