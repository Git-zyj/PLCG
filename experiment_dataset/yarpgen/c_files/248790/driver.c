#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54106;
unsigned short var_1 = (unsigned short)22462;
int var_6 = -1443637949;
unsigned char var_7 = (unsigned char)251;
unsigned int var_10 = 1918888265U;
unsigned short var_13 = (unsigned short)61097;
unsigned short var_16 = (unsigned short)42130;
int zero = 0;
unsigned int var_17 = 1892910126U;
unsigned short var_18 = (unsigned short)18062;
unsigned int var_19 = 3176150706U;
long long int var_20 = 4377331574921782232LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
