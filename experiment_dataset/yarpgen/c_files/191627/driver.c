#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17280;
int var_2 = -2097248210;
unsigned char var_3 = (unsigned char)72;
short var_5 = (short)23348;
unsigned char var_6 = (unsigned char)207;
int zero = 0;
unsigned int var_10 = 298729664U;
short var_11 = (short)-31348;
unsigned long long int var_12 = 9477473434626393898ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
