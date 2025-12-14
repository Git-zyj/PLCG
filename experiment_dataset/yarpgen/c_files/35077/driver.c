#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3439572090U;
unsigned long long int var_6 = 1845700965127763506ULL;
signed char var_8 = (signed char)-94;
int zero = 0;
unsigned short var_13 = (unsigned short)21310;
short var_14 = (short)-592;
unsigned short var_15 = (unsigned short)16337;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
