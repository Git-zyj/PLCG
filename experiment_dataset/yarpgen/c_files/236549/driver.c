#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -90636178;
short var_1 = (short)-15706;
unsigned char var_2 = (unsigned char)70;
unsigned char var_5 = (unsigned char)18;
short var_7 = (short)-23289;
int var_12 = 415133792;
unsigned int var_13 = 1786537498U;
unsigned char var_16 = (unsigned char)15;
unsigned int var_17 = 1124842143U;
int zero = 0;
unsigned int var_19 = 352504463U;
signed char var_20 = (signed char)34;
long long int var_21 = -7684330730016896653LL;
unsigned int var_22 = 2270884762U;
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
