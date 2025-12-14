#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4129504176U;
signed char var_2 = (signed char)56;
unsigned long long int var_4 = 8166153840048901542ULL;
unsigned short var_5 = (unsigned short)60428;
int var_6 = 1019990262;
int var_7 = -746400771;
int var_8 = -1258564884;
unsigned short var_10 = (unsigned short)9771;
int zero = 0;
signed char var_11 = (signed char)1;
signed char var_12 = (signed char)48;
signed char var_13 = (signed char)-6;
void init() {
}

void checksum() {
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
