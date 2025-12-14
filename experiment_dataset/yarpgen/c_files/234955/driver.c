#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-7;
unsigned short var_6 = (unsigned short)15944;
short var_8 = (short)22190;
int zero = 0;
int var_10 = 1488782601;
unsigned short var_11 = (unsigned short)45155;
unsigned long long int var_12 = 16314680544488679317ULL;
signed char var_13 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
