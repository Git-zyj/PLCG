#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1962999016U;
unsigned char var_6 = (unsigned char)164;
int var_7 = 475296236;
unsigned char var_8 = (unsigned char)245;
short var_13 = (short)21921;
unsigned char var_15 = (unsigned char)35;
int zero = 0;
unsigned char var_17 = (unsigned char)155;
int var_18 = 1225051628;
unsigned char var_19 = (unsigned char)174;
long long int var_20 = 5289433698970350929LL;
unsigned long long int var_21 = 5811172604507804483ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
