#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)171;
unsigned char var_8 = (unsigned char)8;
unsigned long long int var_10 = 10959314766363475639ULL;
long long int var_11 = 335223193759518024LL;
int var_12 = 46404174;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 170609890;
unsigned long long int var_15 = 16479804756241290916ULL;
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
