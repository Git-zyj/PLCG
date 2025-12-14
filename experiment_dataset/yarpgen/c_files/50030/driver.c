#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)56;
unsigned short var_6 = (unsigned short)19445;
unsigned short var_7 = (unsigned short)56008;
unsigned long long int var_8 = 3998810814246498309ULL;
int zero = 0;
unsigned int var_12 = 299385147U;
unsigned long long int var_13 = 10039329361209898763ULL;
unsigned char var_14 = (unsigned char)109;
signed char var_15 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
