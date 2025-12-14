#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1193945946;
unsigned char var_1 = (unsigned char)46;
unsigned short var_4 = (unsigned short)16367;
unsigned char var_6 = (unsigned char)139;
unsigned long long int var_8 = 10403443830581806382ULL;
unsigned int var_9 = 487595395U;
unsigned int var_10 = 1910676986U;
unsigned long long int var_11 = 15149145250529639095ULL;
unsigned int var_12 = 2882832923U;
int zero = 0;
unsigned int var_13 = 1703461589U;
short var_14 = (short)23850;
unsigned char var_15 = (unsigned char)197;
unsigned char var_16 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
