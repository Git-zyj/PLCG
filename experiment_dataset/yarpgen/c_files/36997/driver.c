#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2054;
unsigned char var_4 = (unsigned char)28;
unsigned char var_7 = (unsigned char)170;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)81;
unsigned int var_16 = 3258366976U;
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
