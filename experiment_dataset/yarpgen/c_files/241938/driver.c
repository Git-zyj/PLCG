#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_8 = (unsigned char)170;
unsigned short var_11 = (unsigned short)22704;
int zero = 0;
signed char var_13 = (signed char)90;
unsigned long long int var_14 = 14787168243063237705ULL;
unsigned int var_15 = 35544286U;
void init() {
}

void checksum() {
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
