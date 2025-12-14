#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -745541142;
long long int var_2 = -6231329854164248419LL;
unsigned int var_8 = 3512961175U;
long long int var_11 = -3988891055297741453LL;
int zero = 0;
unsigned char var_19 = (unsigned char)2;
unsigned char var_20 = (unsigned char)18;
unsigned long long int var_21 = 14034837660043447720ULL;
unsigned short var_22 = (unsigned short)60398;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
