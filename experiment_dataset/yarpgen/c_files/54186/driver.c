#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)61;
unsigned long long int var_4 = 6659141817583451678ULL;
unsigned short var_5 = (unsigned short)46098;
unsigned long long int var_7 = 14970084911269761689ULL;
long long int var_11 = -7545507511340531973LL;
int zero = 0;
int var_12 = -2065887303;
signed char var_13 = (signed char)-7;
void init() {
}

void checksum() {
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
