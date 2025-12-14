#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 453100341U;
int var_2 = 606140478;
unsigned long long int var_4 = 1369512878506691847ULL;
unsigned int var_5 = 1151359815U;
unsigned char var_8 = (unsigned char)217;
unsigned short var_17 = (unsigned short)11671;
int zero = 0;
short var_20 = (short)20811;
unsigned char var_21 = (unsigned char)160;
void init() {
}

void checksum() {
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
