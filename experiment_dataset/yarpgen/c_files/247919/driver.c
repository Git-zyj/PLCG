#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3727466408U;
unsigned long long int var_2 = 13340768647361650618ULL;
short var_9 = (short)11059;
short var_12 = (short)-12396;
unsigned char var_16 = (unsigned char)26;
unsigned char var_18 = (unsigned char)149;
int zero = 0;
unsigned short var_20 = (unsigned short)5575;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 888572693U;
unsigned long long int var_23 = 2760510297407581872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
