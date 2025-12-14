#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11699;
int var_2 = 1937684914;
signed char var_3 = (signed char)-28;
signed char var_6 = (signed char)-23;
unsigned short var_8 = (unsigned short)23690;
unsigned int var_13 = 3968603011U;
unsigned short var_15 = (unsigned short)64327;
unsigned char var_17 = (unsigned char)0;
int zero = 0;
unsigned char var_19 = (unsigned char)37;
unsigned long long int var_20 = 6219737390803658773ULL;
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
