#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
unsigned char var_1 = (unsigned char)23;
unsigned short var_3 = (unsigned short)36302;
unsigned char var_4 = (unsigned char)3;
signed char var_6 = (signed char)31;
unsigned long long int var_7 = 13486578972704438403ULL;
unsigned long long int var_8 = 12193469470525313167ULL;
int zero = 0;
unsigned int var_10 = 3306554602U;
unsigned short var_11 = (unsigned short)50456;
unsigned int var_12 = 763705470U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
