#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15370;
long long int var_2 = 6724541983184331583LL;
unsigned short var_6 = (unsigned short)19140;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)19;
unsigned short var_18 = (unsigned short)43859;
int zero = 0;
signed char var_19 = (signed char)10;
long long int var_20 = -5872687237143321641LL;
_Bool var_21 = (_Bool)0;
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
