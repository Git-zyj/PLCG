#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2061805805531096635LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 13337534803923284264ULL;
unsigned long long int var_5 = 7197475427170249438ULL;
unsigned short var_6 = (unsigned short)19886;
long long int var_11 = -4633229816512526880LL;
int zero = 0;
unsigned char var_17 = (unsigned char)56;
unsigned char var_18 = (unsigned char)243;
unsigned int var_19 = 2545288834U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
