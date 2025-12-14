#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3589193507U;
long long int var_1 = -3205467959235029691LL;
unsigned int var_3 = 567756408U;
long long int var_4 = 1183818892740925828LL;
short var_5 = (short)-23558;
long long int var_6 = -5890686076447302099LL;
short var_7 = (short)-27783;
long long int var_8 = -6080260195014230134LL;
int zero = 0;
unsigned long long int var_10 = 4263273768459743533ULL;
short var_11 = (short)18448;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
