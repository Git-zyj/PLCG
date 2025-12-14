#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8309582484374172620LL;
unsigned short var_2 = (unsigned short)5714;
signed char var_14 = (signed char)97;
unsigned char var_16 = (unsigned char)53;
unsigned int var_17 = 353542288U;
int zero = 0;
unsigned int var_19 = 3178819603U;
long long int var_20 = -3672974426588243025LL;
unsigned int var_21 = 3577783491U;
void init() {
}

void checksum() {
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
