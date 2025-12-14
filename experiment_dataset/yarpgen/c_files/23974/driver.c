#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15571849452607253094ULL;
unsigned long long int var_4 = 11529801374864543533ULL;
signed char var_5 = (signed char)56;
unsigned char var_8 = (unsigned char)119;
short var_11 = (short)610;
signed char var_12 = (signed char)-69;
unsigned long long int var_13 = 15328037949803732449ULL;
int zero = 0;
long long int var_18 = 3125834475617862477LL;
signed char var_19 = (signed char)19;
unsigned short var_20 = (unsigned short)34606;
unsigned int var_21 = 1843696467U;
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
