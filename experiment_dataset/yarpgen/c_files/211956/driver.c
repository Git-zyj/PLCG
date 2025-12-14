#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 119810105U;
long long int var_4 = 4850010266293108638LL;
unsigned char var_5 = (unsigned char)151;
unsigned int var_7 = 2542559348U;
unsigned char var_8 = (unsigned char)97;
unsigned short var_10 = (unsigned short)44618;
signed char var_13 = (signed char)-61;
long long int var_14 = -5451661679895169282LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
