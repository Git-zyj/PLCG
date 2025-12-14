#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12510684609297166925ULL;
unsigned char var_10 = (unsigned char)15;
unsigned char var_14 = (unsigned char)56;
unsigned char var_15 = (unsigned char)144;
unsigned short var_17 = (unsigned short)63974;
int zero = 0;
signed char var_19 = (signed char)116;
unsigned long long int var_20 = 3666574320920504427ULL;
unsigned short var_21 = (unsigned short)5786;
void init() {
}

void checksum() {
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
