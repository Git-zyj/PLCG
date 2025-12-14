#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)64;
unsigned short var_8 = (unsigned short)16685;
signed char var_13 = (signed char)-97;
unsigned int var_18 = 2533771010U;
int zero = 0;
unsigned int var_19 = 819429354U;
signed char var_20 = (signed char)46;
unsigned char var_21 = (unsigned char)229;
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
